#pragma once
#include "Monoid.h"
#include "Mapping/BinaryOperation.h"

/// <summary>
/// ŒQ
/// </summary>
class Group :
	public Monoid
{
public:
	/// <summary>
	///  ‹tŒ³
	/// </summary>
	/// <returns></returns>
	virtual Group GetInverse() const = 0;
};
