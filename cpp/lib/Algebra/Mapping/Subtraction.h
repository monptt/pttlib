#pragma once
#include "BinaryOperation.h"

template<class Domain>
class Subtraction :
	public BinaryOperation<Domain>
{
public:
	Subtraction(Domain(*subtraction)(const Domain&, const Domain&))
		: subtraction(subtraction)
	{
	};

	Domain Operation(const Domain& a, const Domain& b) const override {
		return subtraction(a, b);
	}

private:
	Domain(*subtraction)(const Domain&, const Domain&);
};

