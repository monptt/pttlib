#pragma once
#include "Semigroup.h"

/// <summary>
/// ƒ‚ƒmƒCƒh
/// </summary>
class Monoid :
	public Semigroup
{
public:
	/// <summary>
	/// ’PˆÊŒ³
	/// </summary>
	/// <returns></returns>
	virtual Monoid GetIdentity() const = 0;
};

