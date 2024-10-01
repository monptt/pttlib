#include <iostream>

#include "lib/Algebra/Polynomial.h"
#include "lib/Algebra/Pair.h"
#include "lib/LinearAlgebra/Vector3.h"
#include "lib/Number/ComplexNumber.h"
#include "lib/Algebra/Mapping/Addition.h"
#include "lib/Algebra/Mapping/Multiplication.h"

int main(int argc, char* argv[]) {
	Polynomial p1 = { 1, 2, 3 };
	Polynomial p2 = { 4, 5, 6 };
	std::cout << p1(1).ToString() << std::endl;
	std::cout << p2.ToString() << std::endl;

	Addition<RealNumber> add([](const RealNumber& a, const RealNumber& b) {return a + b;});
	Multiplication<RealNumber> mul([](const RealNumber& a, const RealNumber& b) {return a * b;});
	return 0;
}
