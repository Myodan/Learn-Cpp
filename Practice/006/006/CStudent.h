#pragma once

#include "CPerson.h"

class CStudent : public CPerson {
private:
	const char * major;
	int grade;

public:
	CStudent();
	CStudent(const char * _name, const char * _address, const char * _major, int _grade);
	~CStudent();

	void Print();
};

