#pragma once
#include "../Class.h"

class Magma : public Class
{
	virtual Magma operator*(const Magma& rhs) const = 0;
};
