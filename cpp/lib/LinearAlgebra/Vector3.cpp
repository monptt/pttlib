#include "Vector3.h"

Vector3::Vector3(RealNumber x, RealNumber y, RealNumber z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator+(const Vector3& other) const
{
	return Vector3(this->x + other.x, this->y + other.y, this->z + other.z);
}

std::string Vector3::ToString() const
{
	std::string str = "Vector3(";
	str += x.ToString();
	str += ",";
	str += y.ToString();
	str += ",";
	str += z.ToString();
	str += ")";
	return str;
}
