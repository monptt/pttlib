#pragma once
#include "../Class.h"
#include "Mapping/BinaryOperation.h"
#include "Mapping/Multiplication.h"
#include "Mapping/Addition.h"
#include "Mapping/Subtraction.h"

class Ring :
	public Class
{
public:
	Ring(Multiplication<Ring> multiplication, Addition<Ring> addition, Subtraction<Ring> subtraction);

	Ring operator+(const Ring& other) const {
		return addition.Operation(*this, other);
	}

	Ring operator-(const Ring& other) const {
		return subtraction.Operation(*this, other);
	}

	Ring operator*(const Ring& other) const {
		return multiplication.Operation(*this, other);
	}

private:
	Multiplication<Ring> multiplication;
	Addition<Ring> addition;
	Subtraction<Ring> subtraction;
};
