#pragma once

#include "CPerson.h"

class CStaff : public CPerson {
private:
	const char * department;
	const char * position;

public:
	CStaff();
	CStaff(const char * _name, const char * _address, const char * _department, const char * _position);
	~CStaff();

	void Print();
};