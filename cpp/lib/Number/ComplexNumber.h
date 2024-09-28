#pragma once
#include "../Class.h"
#include "../Algebra/Pair.h"
#include "RealNumber.h"

class ComplexNumber :
	public Pair<RealNumber, RealNumber>
{
public:
	ComplexNumber(RealNumber a, RealNumber b);
	std::string ToString() const;

private:
	RealNumber& realPart{ this->first };
	RealNumber& imaginaryPart{ this->second };

public:
	static RealNumber Re(ComplexNumber x);
	static RealNumber Im(ComplexNumber x);
};

