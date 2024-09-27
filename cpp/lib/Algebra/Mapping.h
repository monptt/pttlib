#pragma once
#include "../Class.h"

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

	Codomain Map(Domain x) {
		return mapping(x);
	};

private:
	// �֐��|�C���^�Ƃ��Ď���
	Codomain(*mapping)(Domain);
};

