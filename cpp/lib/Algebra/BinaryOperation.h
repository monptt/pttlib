#pragma once
#include "Mapping.h"

template <typename Domain>
class BinaryOperation : Mapping<Domain, Domain>
{
public:
	BinaryOperation(Domain(*func)(Domain, Domain)) {};

	// 可換か
	virtual bool IsCommutative() = 0;

	// 結合的か
	virtual bool IsAssociative() = 0;
};
