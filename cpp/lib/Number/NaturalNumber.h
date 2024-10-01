#pragma once
#include "../Class.h"

class NaturalNumber :
	public Class
{
public:
	NaturalNumber(unsigned int value)
		: value(value)
	{

	}

	NaturalNumber operator-(const NaturalNumber& other) const;
	bool operator==(const NaturalNumber& other) const;

private:
	unsigned int value;
};
