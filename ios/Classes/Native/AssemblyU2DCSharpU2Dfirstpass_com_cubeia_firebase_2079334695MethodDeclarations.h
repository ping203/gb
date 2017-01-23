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

// com.cubeia.firebase.io.protocol.ForcedLogoutPacket
struct ForcedLogoutPacket_t2079334695;
// System.String
struct String_t;
// Styx.PacketOutputStream
struct PacketOutputStream_t1989328347;
// Styx.PacketInputStream
struct PacketInputStream_t1469089790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketOutputStr1989328347.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Styx_PacketInputStre1469089790.h"

// System.Void com.cubeia.firebase.io.protocol.ForcedLogoutPacket::.ctor()
extern "C"  void ForcedLogoutPacket__ctor_m4230902597 (ForcedLogoutPacket_t2079334695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ForcedLogoutPacket::.ctor(System.Int32,System.String)
extern "C"  void ForcedLogoutPacket__ctor_m3638326778 (ForcedLogoutPacket_t2079334695 * __this, int32_t ___code0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte com.cubeia.firebase.io.protocol.ForcedLogoutPacket::classId()
extern "C"  uint8_t ForcedLogoutPacket_classId_m363713030 (ForcedLogoutPacket_t2079334695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ForcedLogoutPacket::save(Styx.PacketOutputStream)
extern "C"  void ForcedLogoutPacket_save_m1137280491 (ForcedLogoutPacket_t2079334695 * __this, PacketOutputStream_t1989328347 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.cubeia.firebase.io.protocol.ForcedLogoutPacket::load(Styx.PacketInputStream)
extern "C"  void ForcedLogoutPacket_load_m863807485 (ForcedLogoutPacket_t2079334695 * __this, PacketInputStream_t1469089790 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String com.cubeia.firebase.io.protocol.ForcedLogoutPacket::ToString()
extern "C"  String_t* ForcedLogoutPacket_ToString_m2039546170 (ForcedLogoutPacket_t2079334695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;