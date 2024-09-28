#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(RealNumber a, RealNumber b) :
	Pair<RealNumber, RealNumber>(a, b)
{
}

std::string ComplexNumber::ToString() const
{
	std::string str = "";
	str += realPart.ToString() + " + ";
	str += imaginaryPart.ToString() + "i";
	return str;
}

RealNumber ComplexNumber::Re(ComplexNumber x)
{
	return x.first;
}

RealNumber ComplexNumber::Im(ComplexNumber x)
{
	return x.second;
}
