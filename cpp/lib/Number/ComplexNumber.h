#pragma once
#include "../Class.h"
#include "../Algebra/Pair.h"
#include "RealNumber.h"

class ComplexNumber :
	public Pair<RealNumber, RealNumber>
{
public:
	ComplexNumber(RealNumber a, RealNumber b);
	ComplexNumber(RealNumber x);
	ComplexNumber(int x);
	std::string ToString() const;

	ComplexNumber operator+(const ComplexNumber& other) const;
	ComplexNumber operator-(const ComplexNumber& other) const;
	ComplexNumber operator*(const ComplexNumber& other) const;
	ComplexNumber operator/(const ComplexNumber& other) const;

private:
	RealNumber& realPart{ this->first };
	RealNumber& imaginaryPart{ this->second };

public:
	static RealNumber Re(ComplexNumber x);
	static RealNumber Im(ComplexNumber x);

private:
	static ComplexNumber Add(const ComplexNumber x, ComplexNumber y);
	static ComplexNumber Sub(ComplexNumber x, ComplexNumber y);
	static ComplexNumber Mul(ComplexNumber x, ComplexNumber y);
	static ComplexNumber Div(ComplexNumber x, ComplexNumber y);

	static RealNumber Abs(ComplexNumber x);
};

