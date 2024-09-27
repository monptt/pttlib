#pragma once
#include "Mapping.h"

template <typename Domain>
class BinaryOperation : Mapping<Domain, Domain>
{
public:
	BinaryOperation(Domain(*func)(Domain, Domain)) {};

	// ‰ÂŠ·‚©
	virtual bool IsCommutative() = 0;

	// Œ‹‡“I‚©
	virtual bool IsAssociative() = 0;
};
