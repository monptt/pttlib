#include "RealNumber.h"

RealNumber::RealNumber(float value)
{
	this->value = value;
}

RealNumber RealNumber::operator+(const RealNumber& other) const
{
	return this->value + other.value;
}

RealNumber RealNumber::operator-(const RealNumber& other) const
{
	return this->value - other.value;
}

RealNumber RealNumber::operator*(const RealNumber& other) const
{
	return this->value * other.value;
}

RealNumber RealNumber::operator/(const RealNumber& other) const
{
	return this->value / other.value;
}

std::string RealNumber::ToString() const
{
	return std::to_string(this->value);
}

RealNumber RealNumber::Sqrt(RealNumber x)
{
	return sqrt(x.value);
}
