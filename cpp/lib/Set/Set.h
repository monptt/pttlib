#pragma once
#include "../Class.h"
#include <vector>

/// <summary>
/// �W��
/// </summary>
class Set :
	public Class
{
public:
	void Append(Class* element);

	std::string ToString() const override;

private:
	std::vector<Class*> elements;
};

