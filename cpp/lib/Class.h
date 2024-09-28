#pragma once

class Class
{
public:
	Class() {};
	virtual ~Class() {};

	// コピーコンストラクタ
	Class(const Class& obj) {};

	const char* GetClassName() const;
};
