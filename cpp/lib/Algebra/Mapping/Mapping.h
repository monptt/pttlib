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

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="mapping">�ʑ��̎���</param>
	Mapping(Codomain(*mapping)(Domain))
		: mapping(mapping) {};

	/// <summary>
	/// �R���X�g���N�^�i�t�ʑ��𓯎��ɒ�`�j
	/// </summary>
	/// <param name="mapping">�ʑ�</param>
	/// <param name="inverse">�t�ʑ�</param>
	Mapping(Codomain(*mapping)(Domain), Domain(*inverse)(Codomain))
		: mapping(mapping), inverse(inverse) {};


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

