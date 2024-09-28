#include <iostream>

#include "lib/Algebra/Polynomial.h"
#include "lib/Algebra/Pair.h"
#include "lib/LinearAlgebra/Vector3.h"

int main(int argc, char* argv[]) {
	std::cout << "Hello, World!" << std::endl;

	Polynomial p = Polynomial({ 1, 2, 3 });
	std::cout << p.ToString() << std::endl;

	Vector3 v1 = Vector3(3, 3, 4);
	Vector3 v2 = Vector3(1, 2, 3);
	std::cout << v1.ToString() << std::endl;
	std::cout << v2.ToString() << std::endl;
	std::cout << (v1 + v2).ToString() << std::endl;
	return 0;
}
