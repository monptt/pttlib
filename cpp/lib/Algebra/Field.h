#pragma once
#include "Ring.h"

/// <summary>
/// ��
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
	/// ���@
	/// </summary>
	BinaryOperation<Field> division;
};

