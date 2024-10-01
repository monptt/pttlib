#include "Ring.h"

Ring::Ring(Multiplication<Ring> multiplication, Addition<Ring> addition)
	: multiplication(multiplication)
	, addition(addition)
{
}
