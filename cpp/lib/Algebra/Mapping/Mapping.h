#pragma once
#include "../../Class.h"

template<class Domain>
class IdentityMapping;

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

	Codomain operator()(Domain x) {
		return Map(x);
	};

	// 写像の合成（引き戻し）
	template<class PullbackDomain>
	Mapping<PullbackDomain, Codomain>* operator*(const Mapping<PullbackDomain, Domain>& pullbackMapping) const {
		return this->Compose(pullbackMapping);
	};

protected:
	/// <summary>
	/// 写像の実装
	/// </summary>
	/// <param name="x">引数</param>
	/// <returns></returns>
	virtual Codomain Map(const Domain& x) const = 0;

	// 写像の合成（引き戻し）
	template<class PullbackDomain>
	Mapping<PullbackDomain, Codomain>* Compose(Mapping<PullbackDomain, Domain> pullbackMapping) {
		if (pullbackMapping.inverse == this) {
			return IdentityMapping<PullbackDomain>();
		}
		else {
			Mapping<PullbackDomain, Domain> composition = Mapping<PullbackDomain, Domain>(
				[](Domain x) {
					return this->Map(pullbackMapping.Map(x));
				}
			);
			return composition;
		}

	};
};

