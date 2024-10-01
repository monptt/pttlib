#include "Ring.h"

Ring::Ring(Multiplication<Ring> multiplication, Addition<Ring> addition, Subtraction<Ring> subtraction)
	: multiplication(multiplication)
	, addition(addition)
	, subtraction(subtraction)
{
}
