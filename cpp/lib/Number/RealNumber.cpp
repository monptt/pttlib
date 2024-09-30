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

RealNumber& RealNumber::operator+=(const RealNumber& other)
{
	this->value = this->value + other.value;
	return *this;
}

std::string RealNumber::ToString() const
{
	return std::to_string(this->value);
}

RealNumber RealNumber::Sqrt(RealNumber x)
{
	return sqrt(x.value);
}

RealNumber RealNumber::Power(RealNumber x, int n)
{
	RealNumber ret = 1;
	for (int i = 0; i < n; i++) {
		ret = ret * x;
	}
	return ret;
}
