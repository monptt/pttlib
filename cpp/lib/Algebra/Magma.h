#pragma once
#include "../Class.h"
#include "Mapping/BinaryOperation.h"

class Magma : public Class
{
	Magma(BinaryOperation<Magma> operation);
	Magma operator*(const Magma& rhs) const {
		return (*operation)(*this, rhs);
	};

private:
	BinaryOperation<Magma>* operation;
};
