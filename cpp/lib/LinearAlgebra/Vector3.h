#pragma once
#include "Vector.h"
#include "../Number/RealNumber.h"

class Vector3 :
    public Vector<3>
{
public:
    Vector3(RealNumber x, RealNumber y, RealNumber z);
    Vector3 operator +(const Vector3& other) const;

    std::string ToString() const;
    
    static Vector3 Cross(const Vector3& a, const Vector3& b);

    RealNumber& x = values[0];
    RealNumber& y = values[1];
    RealNumber& z = values[2];
};

