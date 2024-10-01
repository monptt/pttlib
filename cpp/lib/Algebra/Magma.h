#pragma once
#include "../Class.h"
#include "Mapping/BinaryOperation.h"

class Magma : public Class
{
	Magma(BinaryOperation<Magma> operation);
	Magma operator*(const Magma& rhs) const {
		return (*operation)(Pair<Magma, Magma>(*this, rhs));
	};

private:
	BinaryOperation<Magma>* operation;
};
