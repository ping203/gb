﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.SignerUtilities
struct  SignerUtilities_t1398406104  : public Il2CppObject
{
public:

public:
};

struct SignerUtilities_t1398406104_StaticFields
{
public:
	// System.Collections.IDictionary Org.BouncyCastle.Security.SignerUtilities::algorithms
	Il2CppObject * ___algorithms_0;
	// System.Collections.IDictionary Org.BouncyCastle.Security.SignerUtilities::oids
	Il2CppObject * ___oids_1;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(SignerUtilities_t1398406104_StaticFields, ___algorithms_0)); }
	inline Il2CppObject * get_algorithms_0() const { return ___algorithms_0; }
	inline Il2CppObject ** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(Il2CppObject * value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier(&___algorithms_0, value);
	}

	inline static int32_t get_offset_of_oids_1() { return static_cast<int32_t>(offsetof(SignerUtilities_t1398406104_StaticFields, ___oids_1)); }
	inline Il2CppObject * get_oids_1() const { return ___oids_1; }
	inline Il2CppObject ** get_address_of_oids_1() { return &___oids_1; }
	inline void set_oids_1(Il2CppObject * value)
	{
		___oids_1 = value;
		Il2CppCodeGenWriteBarrier(&___oids_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
