#pragma once
#include "Semigroup.h"

/// <summary>
/// ���m�C�h
/// </summary>
class Monoid :
	public Semigroup
{
public:
	/// <summary>
	/// �P�ʌ�
	/// </summary>
	/// <returns></returns>
	virtual Monoid GetIdentity() const = 0;
};

