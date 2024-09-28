#pragma once
#include "../Class.h"
#include <initializer_list>
#include <string>

/// <summary>
/// ‘½€®
/// </summary>
class Polynomial :
    public Class
{
public:
    Polynomial(std::initializer_list<float> list);

    std::string ToString() const;

private:
    std::initializer_list<float> coefficients;
};

