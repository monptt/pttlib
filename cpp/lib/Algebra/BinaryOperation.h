#pragma once
#include "Mapping.h"

template <typename T>
class BinaryOperation : Mapping
{
public:
	BinaryOperation(T(*func)(T,T)) {};

	// ‰ÂŠ·‚©
	virtual bool IsCommutative() = 0;

	// Œ‹‡“I‚©
	virtual bool IsAssociative() = 0;
};
