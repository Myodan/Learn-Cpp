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
	cout << "捞抚: " << GetName() << endl;
	cout << "林家: " << GetAddress() << endl;
	cout << "何辑: " << department << endl;
	cout << "流氓: " << position << endl << endl;
}