#pragma once
#include "Monoid.h"
#include "Mapping/BinaryOperation.h"

/// <summary>
/// �Q
/// </summary>
class Group :
	public Monoid
{
public:
	/// <summary>
	///  �t��
	/// </summary>
	/// <returns></returns>
	virtual Group GetInverse() const = 0;
};
