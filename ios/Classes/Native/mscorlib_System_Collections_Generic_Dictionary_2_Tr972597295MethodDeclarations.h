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

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.Generic.KeyValuePair`2<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage>>
struct Transform_1_t972597295;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_322707255.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.Generic.KeyValuePair`2<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4020398326_gshared (Transform_1_t972597295 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4020398326(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t972597295 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4020398326_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.Generic.KeyValuePair`2<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t322707255  Transform_1_Invoke_m248511350_gshared (Transform_1_t972597295 * __this, uint64_t ___key0, ClientMessage_t624279968  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m248511350(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t322707255  (*) (Transform_1_t972597295 *, uint64_t, ClientMessage_t624279968 , const MethodInfo*))Transform_1_Invoke_m248511350_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.Generic.KeyValuePair`2<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m166149407_gshared (Transform_1_t972597295 * __this, uint64_t ___key0, ClientMessage_t624279968  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m166149407(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t972597295 *, uint64_t, ClientMessage_t624279968 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m166149407_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.Generic.KeyValuePair`2<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t322707255  Transform_1_EndInvoke_m4055507276_gshared (Transform_1_t972597295 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4055507276(__this, ___result0, method) ((  KeyValuePair_2_t322707255  (*) (Transform_1_t972597295 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4055507276_gshared)(__this, ___result0, method)
