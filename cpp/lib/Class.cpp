#include "Class.h"
#include <typeinfo>

std::string Class::ToString() const
{
	return GetClassName();
}

const char* Class::GetClassName() const
{
	return typeid(*this).name();
}
