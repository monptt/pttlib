#pragma once
#include "../../Class.h"

template<class Domain>
class IdentityMapping;

/// <summary>
/// �ʑ�
/// </summary>
/// <typeparam name="Domain">�n��</typeparam>
/// <typeparam name="Codomain">�I��</typeparam>
template<class Domain, class Codomain>
class Mapping :
	public Class
{
public:
	virtual ~Mapping() {};

	Codomain operator()(Domain x) {
		return Map(x);
	};

	// �ʑ��̍����i�����߂��j
	template<class PullbackDomain>
	Mapping<PullbackDomain, Codomain>* operator*(const Mapping<PullbackDomain, Domain>& pullbackMapping) const {
		return this->Compose(pullbackMapping);
	};

protected:
	/// <summary>
	/// �ʑ��̎���
	/// </summary>
	/// <param name="x">����</param>
	/// <returns></returns>
	virtual Codomain Map(const Domain& x) const = 0;

	// �ʑ��̍����i�����߂��j
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

