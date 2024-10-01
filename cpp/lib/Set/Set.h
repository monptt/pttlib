#pragma once
#include "../Class.h"
#include <vector>
#include "../Number/NaturalNumber.h"

/// <summary>
/// èWçá
/// </summary>
class Set :
	public Class
{
public:
	Set() {};
	virtual ~Set() {};

	Set(int n);

	void Append(Class* element);

	std::string ToString() const override;

private:
	std::vector<Class*> elements;
};

