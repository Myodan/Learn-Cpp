#include "Student.h"

Student::Student() {
	id = NULL;
	name = "";
	grade = NULL;
	address = "";
}

Student::Student(int _id, string _name, int _grade, string _address) {
	id = _id;
	name = _name;
	grade = _grade;
	address = _address;
}

Student::~Student() {

}

void Student::print() {
	cout << "�й�: " << id << endl;
	cout << "�̸�: " << name << endl;
	cout << "�г�: " << grade << endl;
	cout << "�ּ�: " << address << endl;
	cout << endl;
}