#pragma once
#include "Ring.h"
#include "Mapping/Division.h"

/// <summary>
/// ‘Ì
/// </summary>
class Field :
	public Ring
{
public:
	Field(Addition<Ring> addition, Subtraction<Ring> subtraction, Multiplication<Ring> multiplication, Division<Field> division);

private:
	Division<Field> division;
};

