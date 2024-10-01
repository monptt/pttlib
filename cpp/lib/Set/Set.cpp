#include "Set.h"

Set::Set(int n)
{
	for (int i = 0; i < n; i++) {
		this->Append(new Set(i));
	}
}

void Set::Append(Class* element)
{
	elements.push_back(element);
}

std::string Set::ToString() const
{
	std::string str = "{";

	for (int i = 0; i < elements.size(); i++) {
		if (i != 0) {
			str += ", ";
		}
		str += elements[i]->ToString();
	}

	str += "}";
	return str;
}
