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

// BestHTTP.SignalR.OnClosedDelegate
struct OnClosedDelegate_t587495364;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.OnClosedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnClosedDelegate__ctor_m2038834471 (OnClosedDelegate_t587495364 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnClosedDelegate::Invoke(BestHTTP.SignalR.Connection)
extern "C"  void OnClosedDelegate_Invoke_m3374994389 (OnClosedDelegate_t587495364 * __this, Connection_t2915781690 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.OnClosedDelegate::BeginInvoke(BestHTTP.SignalR.Connection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnClosedDelegate_BeginInvoke_m1256582948 (OnClosedDelegate_t587495364 * __this, Connection_t2915781690 * ___connection0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnClosedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnClosedDelegate_EndInvoke_m717672497 (OnClosedDelegate_t587495364 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;