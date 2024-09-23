#pragma once
#include<iostream>
/*--------------------------
		Base Allocator
----------------------------*/

using int32 = int32_t;
using namespace std;;

class BaseAllocator
{
public:
	static void* Alloc(int32 size);
	static void Release(void* ptr);


private:
};

