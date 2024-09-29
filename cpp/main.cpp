#include <iostream>

#include "lib/Algebra/Polynomial.h"
#include "lib/Algebra/Pair.h"
#include "lib/LinearAlgebra/Vector3.h"
#include "lib/Number/ComplexNumber.h"

int main(int argc, char* argv[]) {
	ComplexNumber c1 = ComplexNumber(1, 2);
	ComplexNumber c2 = ComplexNumber(3, 4);
	std::cout << (c1 + c2).ToString() << std::endl;
	std::cout << (c1 - c2).ToString() << std::endl;
	std::cout << (c1 * c2).ToString() << std::endl;
	std::cout << (c1 / c2).ToString() << std::endl;
	return 0;
}
