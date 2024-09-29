#pragma once
#include "Mapping.h"
#include "../Pair.h"

template <typename Domain>
class BinaryOperation : Mapping<Domain, Domain>
{
public:
	BinaryOperation(Domain(*func)(Domain, Domain)) {};

	Domain operator()(Domain x, Domain y) {
		return mapping(Pair<Domain, Domain>(x, y));
	};

	// ‰ÂŠ·‚©
	virtual bool IsCommutative() = 0;

	// Œ‹‡“I‚©
	virtual bool IsAssociative() = 0;
};
