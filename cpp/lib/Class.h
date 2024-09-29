#pragma once
#include <string>

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
