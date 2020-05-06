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
	cout << "학번: " << id << endl;
	cout << "이름: " << name << endl;
	cout << "학년: " << grade << endl;
	cout << "주소: " << address << endl;
	cout << endl;
}