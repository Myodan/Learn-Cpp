#include "CPerson.h"

using namespace std;

CPerson::CPerson() {
	name = NULL;
	address = NULL;
}

CPerson::CPerson(const char * _name, const char * _address) {
	name = _name;
	address = _address;
}

CPerson::~CPerson() {

}

const char * CPerson::GetName() {
	return name;
}

const char * CPerson::GetAddress() {
	return address;
}

void CPerson::Print() {
	cout << "이름: " << name << endl;
	cout << "주소: " << address << endl << endl;
}