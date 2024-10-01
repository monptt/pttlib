#pragma once
#include "BinaryOperation.h"

template<class Domain>
class Division :
	public BinaryOperation<Domain>
{
public:
	Division(Domain(*division)(const Domain&, const Domain&))
		: division(division)
	{
	};

	Domain Operation(const Domain& a, const Domain& b) const override {
		return division(a, b);
	}

private:
	Domain(*division)(const Domain&, const Domain&);
};

