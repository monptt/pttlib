#pragma once
#include "Mapping.h"
#include "../Pair.h"

/// <summary>
/// “ñ€‰‰Z
/// </summary>
/// <typeparam name="Domain"></typeparam>
template <typename Domain>
class BinaryOperation : Mapping<Domain, Domain>
{
public:
	BinaryOperation(Domain(*func)(Domain, Domain)) {};

	Domain operator()(Domain x, Domain y) {
		return mapping(Pair<Domain, Domain>(x, y));
	};
};
