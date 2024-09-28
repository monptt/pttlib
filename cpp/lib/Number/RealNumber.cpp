#include "RealNumber.h"

RealNumber::RealNumber(float value)
{
	this->value = value;
}

std::string RealNumber::ToString() const
{
	return std::to_string(this->value);
}
