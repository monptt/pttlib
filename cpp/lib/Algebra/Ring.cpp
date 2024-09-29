#include "Ring.h"

Ring::Ring(BinaryOperation<Ring> addition, BinaryOperation<Ring> multiplication)
	: addition(addition)
	, multiplication(multiplication)
{
}
