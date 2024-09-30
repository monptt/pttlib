#pragma once
#include "Mapping/Mapping.h"
#include "../Number/RealNumber.h"
#include <initializer_list>
#include <string>

/// <summary>
/// ‘½€®
/// </summary>
class Polynomial :
	public Mapping<RealNumber, RealNumber>
{
public:
	Polynomial(std::initializer_list<float> list);

	std::string ToString() const;

private:
	std::initializer_list<float> coefficients;
};

