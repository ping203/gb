﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.BaseOutputStream
struct  BaseOutputStream_t91853118  : public Stream_t3255436806
{
public:
	// System.Boolean Org.BouncyCastle.Utilities.IO.BaseOutputStream::closed
	bool ___closed_1;

public:
	inline static int32_t get_offset_of_closed_1() { return static_cast<int32_t>(offsetof(BaseOutputStream_t91853118, ___closed_1)); }
	inline bool get_closed_1() const { return ___closed_1; }
	inline bool* get_address_of_closed_1() { return &___closed_1; }
	inline void set_closed_1(bool value)
	{
		___closed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
