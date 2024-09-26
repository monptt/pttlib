#pragma once
#include "Mapping.h"

template <typename T>
class BinaryOperation : Mapping
{
public:
	BinaryOperation(T(*func)(T,T)) {};

	// ����
	virtual bool IsCommutative() = 0;

	// �����I��
	virtual bool IsAssociative() = 0;
};
