#pragma once
#include "Mapping.h"
#include "../Pair.h"

/// <summary>
/// “ñ€‰‰Z
/// </summary>
/// <typeparam name="Domain"></typeparam>
template <typename Domain>
class BinaryOperation
	: public Mapping<Pair<Domain, Domain>, Domain>
{
public:
	virtual Domain Map(const Pair<Domain, Domain>& x) const override;

	virtual Domain Operation(const Domain& a, const Domain& b) const = 0;
};

template<typename Domain>
inline Domain BinaryOperation<Domain>::Map(const Pair<Domain, Domain>& x) const
{
	return this->Operation(x.GetFirst(), x.GetSecond());
}
