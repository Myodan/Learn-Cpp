#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int id;
	string name;
	int grade;
	string address;

public:
	Student();
	Student(int _id, string _name, int _grade, string _address);
	virtual ~Student();

	void print();
};