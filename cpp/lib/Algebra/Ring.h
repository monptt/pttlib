#pragma once
#include "../Class.h"
#include "Mapping/BinaryOperation.h"

class Ring :
	public Class
{
public:
	Ring(BinaryOperation<Ring> addition, BinaryOperation<Ring> multiplication);

	Ring operator+ (const Ring& rhs) {
		return addition(*this, rhs);
	}

	Ring operator* (const Ring& rhs) {
		return multiplication(*this, rhs);
	}

private:
	/// <summary>
	/// ���@
	/// </summary>
	BinaryOperation<Ring> addition;

	/// <summary>
	/// ��@
	/// </summary>
	BinaryOperation<Ring> multiplication;
};
