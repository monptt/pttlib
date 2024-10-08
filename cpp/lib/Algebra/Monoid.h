#pragma once
#include "Semigroup.h"

/// <summary>
/// モノイド
/// </summary>
class Monoid :
	public Semigroup
{
public:
	/// <summary>
	/// 単位元
	/// </summary>
	/// <returns></returns>
	virtual Monoid GetIdentity() const = 0;
};

