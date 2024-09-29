#include <iostream>

#include "lib/Algebra/Polynomial.h"
#include "lib/Algebra/Pair.h"
#include "lib/LinearAlgebra/Vector3.h"
#include "lib/Number/ComplexNumber.h"

int main(int argc, char* argv[]) {
	Vector3 v1(1, 2, 3);
	Vector3 v2(3, 2, 1);
	std::cout << Vector3::Dot(v1, v2).ToString() << std::endl;
	return 0;
}
