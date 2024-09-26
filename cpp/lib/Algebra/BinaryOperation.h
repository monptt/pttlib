#pragma once
#include "Mapping.h"

template <typename T>
class BinaryOperation : Mapping
{
public:
	BinaryOperation(T(*func)(T,T)) {};

	// 可換か
	virtual bool IsCommutative() = 0;

	// 結合的か
	virtual bool IsAssociative() = 0;
};
