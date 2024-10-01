#include <iostream>

#include "lib/Algebra/Polynomial.h"
#include "lib/Algebra/Pair.h"
#include "lib/LinearAlgebra/Vector3.h"
#include "lib/Number/ComplexNumber.h"
#include "lib/Algebra/Mapping/Addition.h"
#include "lib/Algebra/Mapping/Multiplication.h"
#include "lib/Set/Set.h"

int main(int argc, char* argv[]) {
	for (int i = 0; i < 10; i++) {
		Set set = Set(i);
		std::cout << set.ToString() << std::endl;
	}
	return 0;
}
