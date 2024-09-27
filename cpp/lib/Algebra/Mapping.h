#pragma once
#include "../Class.h"

/// <summary>
/// 写像
/// </summary>
/// <typeparam name="Domain">始域</typeparam>
/// <typeparam name="Codomain">終域</typeparam>
template<class Domain, class Codomain>
class Mapping :
	public Class
{
public:
	virtual ~Mapping() {};

	Mapping(Codomain(*mapping)(Domain)) {
		this->mapping = mapping;
	};

	Codomain Map(Domain x) {
		return mapping(x);
	};

	// 写像の合成（引き戻し）
	template<class PullbackDomain>
	Mapping<PullbackDomain, Codomain> operator*(const Mapping<PullbackDomain, Domain>& pullbackMapping) const {
		return this->Compose(pullbackMapping);
	};

private:
	// 写像を関数ポインタとして実装
	Codomain(*mapping)(Domain);

	// 写像の合成（引き戻し）
	template<class PullbackDomain>
	Mapping<PullbackDomain, Codomain> Compose(Mapping<PullbackDomain, Domain> pullbackMapping) {
		Mapping<PullbackDomain, Domain> composition = Mapping<PullbackDomain, Domain>(
			[](Domain x) {
				return this->Map(pullbackMapping.Map(x));
			}
		);
		return composition;
	};
};

