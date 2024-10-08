#pragma once
#include "Mapping/Mapping.h"
#include "../Number/RealNumber.h"
#include <initializer_list>
#include <string>

/// <summary>
/// ������
/// </summary>
class Polynomial :
	public Mapping<RealNumber, RealNumber>
{
public:
	Polynomial(std::initializer_list<float> list);

	std::string ToString() const;

protected:
	RealNumber Map(const RealNumber& x) const override;

private:
	std::initializer_list<float> coefficients;
};

