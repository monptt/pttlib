#pragma once
#include "../Class.h"

template<class A, class B>
class Pair :
	public Class
{
public:
	Pair(A a, B b) : first(a), second(b) {
		this->first = a;
		this->second = b;
	}

private:
	A first;
	B second;
};
