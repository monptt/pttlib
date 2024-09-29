#pragma once
#include "../../Class.h"

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

	Mapping(Codomain(*mapping)(Domain)) {
		this->mapping = mapping;
	};

	Codomain operator()(Domain x) {
		return mapping(x);
	};

	Codomain Map(Domain x) {
		return mapping(x);
	};

	// �ʑ��̍����i�����߂��j
	template<class PullbackDomain>
	Mapping<PullbackDomain, Codomain> operator*(const Mapping<PullbackDomain, Domain>& pullbackMapping) const {
		return this->Compose(pullbackMapping);
	};

protected:
	// �ʑ����֐��|�C���^�Ƃ��Ď���
	Codomain(*mapping)(Domain);

	// �t�ʑ�
	Mapping<Codomain, Domain>* inverse;

	// �ʑ��̍����i�����߂��j
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

