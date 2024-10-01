#include "NaturalNumber.h"

NaturalNumber NaturalNumber::operator-(const NaturalNumber& other) const
{
	return this->value - other.value;
}

bool NaturalNumber::operator==(const NaturalNumber& other) const
{
	return this->value == other.value;
}
