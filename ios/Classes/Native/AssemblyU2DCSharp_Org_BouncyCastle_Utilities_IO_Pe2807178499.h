﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1561828458;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.Pem.PemReader
struct  PemReader_t2807178499  : public Il2CppObject
{
public:
	// System.IO.TextReader Org.BouncyCastle.Utilities.IO.Pem.PemReader::reader
	TextReader_t1561828458 * ___reader_2;

public:
	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(PemReader_t2807178499, ___reader_2)); }
	inline TextReader_t1561828458 * get_reader_2() const { return ___reader_2; }
	inline TextReader_t1561828458 ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(TextReader_t1561828458 * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier(&___reader_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
