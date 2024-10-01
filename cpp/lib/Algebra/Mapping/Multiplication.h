#pragma once
#include "BinaryOperation.h"

template<class Domain>
class Multiplication :
	public BinaryOperation<Domain>
{
public:
	Multiplication(Domain(*addition)(const Domain&, const Domain&))
		: multiplication(multiplication)
	{
	};

	Domain Operation(const Domain& a, const Domain& b) const override {
		return multiplication(a, b);
	}

private:
	Domain(*multiplication)(const Domain&, const Domain&);
};

