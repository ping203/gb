﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameCenterInvitations
struct GameCenterInvitations_t2643374653;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_Singleton`1<GameCenterInvitations>
struct  ISN_Singleton_1_t1583974669  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct ISN_Singleton_1_t1583974669_StaticFields
{
public:
	// T ISN_Singleton`1::_instance
	GameCenterInvitations_t2643374653 * ____instance_2;
	// System.Boolean ISN_Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_3;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(ISN_Singleton_1_t1583974669_StaticFields, ____instance_2)); }
	inline GameCenterInvitations_t2643374653 * get__instance_2() const { return ____instance_2; }
	inline GameCenterInvitations_t2643374653 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(GameCenterInvitations_t2643374653 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_3() { return static_cast<int32_t>(offsetof(ISN_Singleton_1_t1583974669_StaticFields, ___applicationIsQuitting_3)); }
	inline bool get_applicationIsQuitting_3() const { return ___applicationIsQuitting_3; }
	inline bool* get_address_of_applicationIsQuitting_3() { return &___applicationIsQuitting_3; }
	inline void set_applicationIsQuitting_3(bool value)
	{
		___applicationIsQuitting_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
