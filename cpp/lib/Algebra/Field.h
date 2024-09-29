#pragma once
#include "Ring.h"

/// <summary>
/// ëÃ
/// </summary>
class Field :
	public Ring
{
public:
	Field operator/ (const Field& rhs) {
		return division(*this, rhs);
	}

private:
	/// <summary>
	/// èúñ@
	/// </summary>
	BinaryOperation<Field> division;
};

