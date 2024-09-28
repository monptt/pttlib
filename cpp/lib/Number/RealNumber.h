#pragma once
#include "../Class.h"
#include <string>

class RealNumber :
	public Class
{
public:
	RealNumber() { this->value = 0; };
	RealNumber(const RealNumber& obj) { this->value = obj.value; };
	RealNumber(float value);

	std::string ToString() const;
private:
	float value;
};
