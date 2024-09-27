#pragma once
#include "Mapping.h"

template <typename Domain>
class BinaryOperation : Mapping<Domain, Domain>
{
public:
	BinaryOperation(Domain(*func)(Domain, Domain)) {};

	// ����
	virtual bool IsCommutative() = 0;

	// �����I��
	virtual bool IsAssociative() = 0;
};
