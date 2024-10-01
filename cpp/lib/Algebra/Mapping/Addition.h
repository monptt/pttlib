#pragma once
#include "BinaryOperation.h"

template<class Domain>
class Addition :
	public BinaryOperation<Domain>
{
public:
	Addition(Domain(*addition)(const Domain&, const Domain&))
		: addition(addition)
	{
	};

	Domain Operation(const Domain& a, const Domain& b) const override {
		return addition(a, b);
	}

private:
	Domain(*addition)(const Domain&, const Domain&);
};

