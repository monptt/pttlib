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

	// ����
	virtual bool IsCommutative() = 0;

	// �����I��
	virtual bool IsAssociative() = 0;
};
