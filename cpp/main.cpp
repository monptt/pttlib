#include <iostream>

#include "lib/Algebra/Polynomial.h"
#include "lib/Algebra/Pair.h"
#include "lib/LinearAlgebra/Vector3.h"

int main(int argc, char* argv[]) {
	std::cout << "Hello, World!" << std::endl;

	Polynomial p = Polynomial({ 1, 2, 3 });
	std::cout << p.ToString() << std::endl;

	Vector3 v = Vector3(1, 3, 3);
	std::cout << v.ToString() << std::endl;
	return 0;
}
