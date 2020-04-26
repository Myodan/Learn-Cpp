#pragma once

#include <iostream>

class CPerson {
private:
	const char * name;
	const char * address;

public:
	CPerson();
	CPerson(const char * _name, const char * _address);
	~CPerson();

	const char * GetName();
	const char * GetAddress();

	virtual void Print();
};