#pragma once
#include "../Class.h"
#include "Mapping/BinaryOperation.h"

class Magma : public Class
{
	Magma(BinaryOperation<Magma> operation);
	virtual Magma operator*(const Magma& rhs) const = 0;

private:

};
