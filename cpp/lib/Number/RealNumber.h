#pragma once
#include "../Class.h"
#include <string>

class RealNumber :
	public Class
{
public:
	RealNumber() { this->value = 0; };
	RealNumber(const RealNumber& obj) { this->value = obj.value; };
	RealNumber(double value);
	RealNumber(float value);
	RealNumber(int value);

	RealNumber operator+(const RealNumber& other) const;
	RealNumber operator-(const RealNumber& other) const;
	RealNumber operator*(const RealNumber& other) const;
	RealNumber operator/(const RealNumber& other) const;

	std::string ToString() const;
private:
	float value;

public:
	static RealNumber Sqrt(RealNumber x);
};
