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

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="mapping">写像の実装</param>
	Mapping(Codomain(*mapping)(Domain))
		: mapping(mapping) {};

	/// <summary>
	/// コンストラクタ（逆写像を同時に定義）
	/// </summary>
	/// <param name="mapping">写像</param>
	/// <param name="inverse">逆写像</param>
	Mapping(Codomain(*mapping)(Domain), Domain(*inverse)(Codomain))
		: mapping(mapping), inverse(inverse) {};


	Codomain operator()(Domain x) {
		return mapping(x);
	};

	Codomain Map(Domain x) {
		return mapping(x);
	};

	// 写像の合成（引き戻し）
	template<class PullbackDomain>
	Mapping<PullbackDomain, Codomain> operator*(const Mapping<PullbackDomain, Domain>& pullbackMapping) const {
		return this->Compose(pullbackMapping);
	};

protected:
	// 写像を関数ポインタとして実装
	Codomain(*mapping)(Domain);

	// 逆写像
	Mapping<Codomain, Domain>* inverse;

	// 写像の合成（引き戻し）
	template<class PullbackDomain>
	Mapping<PullbackDomain, Codomain> Compose(Mapping<PullbackDomain, Domain> pullbackMapping) {
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

