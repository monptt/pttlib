#pragma once
#include "Vector.h"
#include "../Number/RealNumber.h"

class Vector3 :
    public Vector
{
public:
    Vector3(RealNumber x, RealNumber y, RealNumber z);

    std::string ToString() const;

    RealNumber x;
    RealNumber y;
    RealNumber z;
};

