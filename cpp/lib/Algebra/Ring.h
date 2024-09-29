#pragma once
#include "../Class.h"
#include "Mapping/BinaryOperation.h"

class Ring :
	public Class
{
public:
	Ring(BinaryOperation<Ring> addition, BinaryOperation<Ring> multiplication);

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
