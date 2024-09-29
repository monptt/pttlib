#include "RealNumber.h"

RealNumber::RealNumber(double value)
{
	this->value = static_cast<float>(value);
}

RealNumber::RealNumber(float value)
{
	this->value = value;
}

RealNumber::RealNumber(int value)
{
	this->value = static_cast<float>(value);
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
