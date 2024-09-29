#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(RealNumber a, RealNumber b) :
	Pair<RealNumber, RealNumber>(a, b)
{
}

ComplexNumber::ComplexNumber(RealNumber x)
	:ComplexNumber(x, 0)
{
}

ComplexNumber::ComplexNumber(int x)
	:ComplexNumber(x, 0)
{

}

std::string ComplexNumber::ToString() const
{
	std::string str = "";
	str += realPart.ToString() + " + ";
	str += imaginaryPart.ToString() + "i";
	return str;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const
{
	return Add(*this, other);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const
{
	return Sub(*this, other);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const
{
	return Mul(*this, other);
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const
{
	return Div(*this, other);
}

RealNumber ComplexNumber::Re(ComplexNumber x)
{
	return x.first;
}

RealNumber ComplexNumber::Im(ComplexNumber x)
{
	return x.second;
}

ComplexNumber ComplexNumber::Add(ComplexNumber x, ComplexNumber y)
{
	return ComplexNumber(Re(x) + Re(y), Im(x) + Im(y));
}

ComplexNumber ComplexNumber::Sub(ComplexNumber x, ComplexNumber y)
{
	return ComplexNumber(Re(x) - Re(y), Im(x) - Im(y));
}

ComplexNumber ComplexNumber::Mul(ComplexNumber x, ComplexNumber y)
{
	return ComplexNumber(Re(x) * Re(y) - Im(x) * Im(y), Re(x) * Im(y) + Im(x) * Re(y));
}

ComplexNumber ComplexNumber::Div(ComplexNumber x, ComplexNumber y)
{
	RealNumber re = (Re(x) * Re(y) + Im(x) * Im(y)) / (Re(y) * Re(y) + Im(y) * Im(y));
	RealNumber im = (Im(x) * Re(y) - Re(x) * Im(y)) / (Re(y) * Re(y) + Im(y) * Im(y));
	return ComplexNumber(re, im);
}

RealNumber ComplexNumber::Abs(ComplexNumber x)
{
	return RealNumber::Sqrt(Re(x) * Re(x) + Im(x) * Im(x));
}
