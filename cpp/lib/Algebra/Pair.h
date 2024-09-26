#pragma once
#include "../Class.h"


class Pair :
	public Class
{
public:
	Pair(Class a, Class b) : first(a), second(b) {}

private:
	Class first;
	Class second;
};
