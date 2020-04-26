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
	cout << "�̸�: " << GetName() << endl;
	cout << "�ּ�: " << GetAddress() << endl;
	cout << "�μ�: " << department << endl;
	cout << "��å: " << position << endl << endl;
}