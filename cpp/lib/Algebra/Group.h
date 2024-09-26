#pragma once
#include "Semigroup.h"

class Group :
    public Semigroup
{
    virtual Group Inverse() = 0;
};
