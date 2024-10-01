#include "Field.h"

Field::Field(Addition<Ring> addition, Subtraction<Ring> subtraction, Multiplication<Ring> multiplication, Division<Field> division)
	: Ring(multiplication, addition, subtraction)
	, division(division)
{
}
