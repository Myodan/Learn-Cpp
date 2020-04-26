#pragma once

#include <iostream>

class Employee {
private:
	int uid;
	const char * name;
	int age;
	const char * department;
	const char * position;
	const char * address;

public:
	Employee();
	Employee(int _uid, const char * _name, int _age, const char * _department, const char * _position, const char * _address);
	~Employee();

	int GetUid();
	const char * GetName();
	int GetAge();
	const char * GetDepartment();
	const char * GetPosition();
	const char * GetAddress();

	void SetUid(int _uid);
	void SetName(const char * _name);
	void SetAge(int _age);
	void SetDepartment(const char * _department);
	void SetPosition(const char * _position);
	void SetAddress(const char * _address);

	void Print();
};