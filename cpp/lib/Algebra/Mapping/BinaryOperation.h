#pragma once
#include "Mapping.h"
#include "../Pair.h"

/// <summary>
/// “ñ€‰‰Z
/// </summary>
/// <typeparam name="Domain"></typeparam>
template <typename Domain>
class BinaryOperation
	: public Mapping<Pair<const Domain&, const Domain&>, Domain>
{
public:
	virtual Domain Map(const Pair<const Domain&, const Domain&>& x) const override;

	virtual Domain Operation(const Domain& a, const Domain& b) const = 0;

	Domain operator()(const Domain& a, const Domain& b) {
		return Operation(a, b);
	};
};

template<typename Domain>
inline Domain BinaryOperation<Domain>::Map(const Pair<const Domain&, const Domain&>& x) const
{
	return this->Operation(x.GetFirst(), x.GetSecond());
}
