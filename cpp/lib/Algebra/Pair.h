#pragma once
#include "../Class.h"

template<class ClassA, class ClassB>
class Pair :
	public Class
{
public:
	Pair(ClassA a, ClassB b) : first(a), second(b) {}

	ClassA GetFirst() const {
		return first;
	}

	ClassB GetSecond() const {
		return second;
	}

protected:
	ClassA first;
	ClassB second;
};
