#pragma once
#include "Mapping.h"
#include "../Pair.h"

/// <summary>
/// “ñ€‰‰Z
/// </summary>
/// <typeparam name="Domain"></typeparam>
template <typename Domain>
class BinaryOperation : public Mapping<Pair<Domain, Domain>, Domain>
{
public:
	BinaryOperation(Domain(*func)(Domain, Domain))
		: Mapping<Pair<Domain, Domain>, Domain>(func)
	{};

	Domain operator()(Domain x, Domain y) {
		return this->mapping(Pair<Domain, Domain>(x, y));
	};
};
