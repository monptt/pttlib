#pragma once
#include <string>

#ifndef VARNAME(x)
#define VARNAME(x) #x
#endif

class Class
{
public:
	Class() {};
	virtual ~Class() {};

	// コピーコンストラクタ
	Class(const Class& obj) {};

	virtual std::string ToString() const;
	const char* GetClassName() const;
};
