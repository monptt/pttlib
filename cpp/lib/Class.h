#pragma once
#include <string>

class Class
{
public:
	Class() {};
	virtual ~Class() {};

	// �R�s�[�R���X�g���N�^
	Class(const Class& obj) {};

	virtual std::string ToString() const;
	const char* GetClassName() const;
};
