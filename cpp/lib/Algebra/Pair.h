#pragma once
#include "../Class.h"

template<class A, class B>
class Pair :
	public Class
{
public:
	Pair(A a, B b) : first(a), second(b) {}

protected:
	A first;
	B second;
};
