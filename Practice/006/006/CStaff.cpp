#include "CStaff.h"

using namespace std;

CStaff::CStaff() : CPerson() {
	department = NULL;
	position = NULL;
}

CStaff::CStaff(const char * _name, const char * _address, const char * _department, const char * _position) : CPerson(_name, _address) {
	department = _department;
	position = _position;
}

CStaff::~CStaff() {

}

void CStaff::Print() {
	cout << "이름: " << GetName() << endl;
	cout << "주소: " << GetAddress() << endl;
	cout << "부서: " << department << endl;
	cout << "직책: " << position << endl << endl;
}