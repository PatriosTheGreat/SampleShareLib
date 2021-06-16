#pragma once

#include <stdio.h>
#if EXPORT_LIB
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

class DLL_API Foo {
public:
	Foo();

	void ReadStuff(FILE *file);
};