#include "Class.h"
#include <typeinfo>

const char* Class::GetClassName() const
{
	return typeid(*this).name();
}
