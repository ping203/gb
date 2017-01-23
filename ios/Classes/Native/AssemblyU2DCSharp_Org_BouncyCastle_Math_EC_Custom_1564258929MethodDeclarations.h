﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve
struct SecT283K1Curve_t1564258929;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_t768735235;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::.ctor()
extern "C"  void SecT283K1Curve__ctor_m830461246 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::CloneCurve()
extern "C"  ECCurve_t140895757 * SecT283K1Curve_CloneCurve_m3430967746 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::SupportsCoordinateSystem(System.Int32)
extern "C"  bool SecT283K1Curve_SupportsCoordinateSystem_m160908828 (SecT283K1Curve_t1564258929 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::CreateDefaultMultiplier()
extern "C"  Il2CppObject * SecT283K1Curve_CreateDefaultMultiplier_m3350180519 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::get_Infinity()
extern "C"  ECPoint_t626351532 * SecT283K1Curve_get_Infinity_m1571346172 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::get_FieldSize()
extern "C"  int32_t SecT283K1Curve_get_FieldSize_m2143306326 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  ECFieldElement_t1092946118 * SecT283K1Curve_FromBigInteger_m3370041767 (SecT283K1Curve_t1564258929 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  ECPoint_t626351532 * SecT283K1Curve_CreateRawPoint_m3058448092 (SecT283K1Curve_t1564258929 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  ECPoint_t626351532 * SecT283K1Curve_CreateRawPoint_m553476864 (SecT283K1Curve_t1564258929 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, ECFieldElementU5BU5D_t1670892899* ___zs2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::get_IsKoblitz()
extern "C"  bool SecT283K1Curve_get_IsKoblitz_m852591146 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::DecompressPoint(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * SecT283K1Curve_DecompressPoint_m1114308997 (SecT283K1Curve_t1564258929 * __this, int32_t ___yTilde0, BigInteger_t4268922522 * ___X11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::SolveQuadraticEquation(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283K1Curve_SolveQuadraticEquation_m2169027418 (SecT283K1Curve_t1564258929 * __this, ECFieldElement_t1092946118 * ___beta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::get_M()
extern "C"  int32_t SecT283K1Curve_get_M_m4199346676 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::get_IsTrinomial()
extern "C"  bool SecT283K1Curve_get_IsTrinomial_m3012702754 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::get_K1()
extern "C"  int32_t SecT283K1Curve_get_K1_m1773517301 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::get_K2()
extern "C"  int32_t SecT283K1Curve_get_K2_m1773517202 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283K1Curve::get_K3()
extern "C"  int32_t SecT283K1Curve_get_K3_m1773517235 (SecT283K1Curve_t1564258929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;