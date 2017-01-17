#if !BESTHTTP_DISABLE_ALTERNATE_SSL && (!UNITY_WEBGL || UNITY_EDITOR)

using System;
using System.Diagnostics;

using Org.BouncyCastle.Math.Raw;

namespace Org.BouncyCastle.Math.EC.Custom.Sec
{
    internal class SecT113Field
    {
        private const ulong M49 = ulong.MaxValue >> 15;
        private const ulong M57 = ulong.MaxValue >> 7;

        public static void Add(ulong[] x, ulong[] y, ulong[] z)
        {
            z[0] = x[0] ^ y[0];
            z[1] = x[1] ^ y[1];
        }

        public static void AddExt(ulong[] xx, ulong[] yy, ulong[] zz)
        {
            zz[0] = xx[0] ^ yy[0];
            zz[1] = xx[1] ^ yy[1];
            zz[2] = xx[2] ^ yy[2];
            zz[3] = xx[3] ^ yy[3];
        }

        public static void AddOne(ulong[] x, ulong[] z)
        {
            z[0] = x[0] ^ 1UL;
            z[1] = x[1];
        }

        public static ulong[] FromBigInteger(BigInteger x)
        {
            ulong[] z = Nat128.FromBigInteger64(x);
            Reduce15(z, 0);
            return z;
        }

        public static void Multiply(ulong[] x, ulong[] y, ulong[] z)
        {
            ulong[] tt = Nat128.CreateExt64();
            ImplMultiply(x, y, tt);
            Reduce(tt, z);
        }

        public static void MultiplyAddToExt(ulong[] x, ulong[] y, ulong[] zz)
        {
            ulong[] tt = Nat128.CreateExt64();
            ImplMultiply(x, y, tt);
            AddExt(zz, tt, zz);
        }

        public static void Reduce(ulong[] xx, ulong[] z)
        {
            ulong x0 = xx[0], x1 = xx[1], x2 = xx[2], x3 = xx[3];

            x1 ^= (x3 << 15) ^ (x3 << 24);
            x2 ^= (x3 >> 49) ^ (x3 >> 40);

            x0 ^= (x2 << 15) ^ (x2 << 24);
            x1 ^= (x2 >> 49) ^ (x2 >> 40);

            ulong t = x1 >> 49;
            z[0]    = x0 ^ t ^ (t << 9);
            z[1]    = x1 & M49;
        }

        public static void Reduce15(ulong[] z, int zOff)
        {
            ulong z1     = z[zOff + 1], t = z1 >> 49;
            z[zOff    ] ^= t ^ (t << 9);
            z[zOff + 1]  = z1 & M49;
        }

        public static void Square(ulong[] x, ulong[] z)
        {
            ulong[] tt = Nat128.CreateExt64();
            ImplSquare(x, tt);
            Reduce(tt, z);
        }

        public static void SquareAddToExt(ulong[] x, ulong[] zz)
        {
            ulong[] tt = Nat128.CreateExt64();
            ImplSquare(x, tt);
            AddExt(zz, tt, zz);
        }

        public static void SquareN(ulong[] x, int n, ulong[] z)
        {
            System.Diagnostics.Debug.Assert(n > 0);

            ulong[] tt = Nat128.CreateExt64();
            ImplSquare(x, tt);
            Reduce(tt, z);

            while (--n > 0)
            {
                ImplSquare(z, tt);
                Reduce(tt, z);
            }
        }

        protected static void ImplMultiply(ulong[] x, ulong[] y, ulong[] zz)
        {
            /*
             * "Three-way recursion" as described in "Batch binary Edwards", Daniel J. Bernstein.
             */

            ulong f0 = x[0], f1 = x[1];
            f1  = ((f0 >> 57) ^ (f1 << 7)) & M57;
            f0 &= M57;

            ulong g0 = y[0], g1 = y[1];
            g1  = ((g0 >> 57) ^ (g1 << 7)) & M57;
            g0 &= M57;

            ulong[] H = new ulong[6];

            ImplMulw(f0, g0, H, 0);               // H(0)       57/56 bits                                
            ImplMulw(f1, g1, H, 2);               // H(INF)     57/54 bits                                
            ImplMulw(f0 ^ f1, g0 ^ g1, H, 4);     // H(1)       57/56 bits

            ulong r  = H[1] ^ H[2];
            ulong z0 = H[0],
                  z3 = H[3],
                  z1 = H[4] ^ z0 ^ r,
                  z2 = H[5] ^ z3 ^ r;

            zz[0] =  z0        ^ (z1 << 57);
            zz[1] = (z1 >>  7) ^ (z2 << 50);
            zz[2] = (z2 >> 14) ^ (z3 << 43);
            zz[3] = (z3 >> 21);
        }

        protected static void ImplMulw(ulong x, ulong y, ulong[] z, int zOff)
        {
            System.Diagnostics.Debug.Assert(x >> 57 == 0);
            System.Diagnostics.Debug.Assert(y >> 57 == 0);

            ulong[] u = new ulong[8];
            //u[0] = 0;
            u[1] = y;
            u[2] = u[1] << 1;
            u[3] = u[2] ^ y;
            u[4] = u[2] << 1;
            u[5] = u[4] ^ y;
            u[6] = u[3] << 1;
            u[7] = u[6] ^ y;

            uint j = (uint)x;
            ulong g, h = 0, l = u[j & 7];
            int k = 48;
            do
            {
                j  = (uint)(x >> k);
                g  = u[j & 7]
                   ^ u[(j >> 3) & 7] << 3
                   ^ u[(j >> 6) & 7] << 6;
                l ^= (g << k);
                h ^= (g >> -k);
            }
            while ((k -= 9) > 0);

            h ^= ((x & 0x0100804020100800UL) & (ulong)(((long)y << 7) >> 63)) >> 8;

            System.Diagnostics.Debug.Assert(h >> 49 == 0);

            z[zOff    ] = l & M57;
            z[zOff + 1] = (l >> 57) ^ (h << 7);
        }

        protected static void ImplSquare(ulong[] x, ulong[] zz)
        {
            Interleave.Expand64To128(x[0], zz, 0);
            Interleave.Expand64To128(x[1], zz, 2);
        }
    }
}

#endif
