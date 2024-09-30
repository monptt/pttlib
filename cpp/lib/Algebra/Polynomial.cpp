#include "Polynomial.h"

Polynomial::Polynomial(std::initializer_list<float> list)
{
	this->coefficients = list;
}

std::string Polynomial::ToString() const
{
	std::string str = "";
	for (int i = 0; i < coefficients.size(); ++i) {
		const float coefficient = coefficients.begin()[i];
		if (i == 0) {
			str += std::to_string(coefficient);
		}
		else {
			str += " + ";
			str += std::to_string(coefficient);
			str += "x^";
			str += std::to_string(i);
		}
	}
	return str;
}

RealNumber Polynomial::Map(RealNumber x) const
{
	RealNumber ret = 0;
	for (int i = 0; i < coefficients.size(); ++i) {
		ret += RealNumber(coefficients.begin()[i]) * RealNumber::Power(x, i);
	}
	return ret;
}
