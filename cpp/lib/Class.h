#pragma once

class Class
{
public:
	Class() {};
	virtual ~Class() {};

	// �R�s�[�R���X�g���N�^
	Class(const Class& obj) {};

	const char* GetClassName() const;
};
