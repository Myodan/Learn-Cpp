#include "CStudent.h"

using namespace std;

CStudent::CStudent() : CPerson() {
	major = NULL;
	grade = NULL;
}

CStudent::CStudent(const char * _name, const char * _address, const char * _major, int _grade) : CPerson(_name, _address){
	major = _major;
	grade = _grade;
}

CStudent::~CStudent() {

}

void CStudent::Print() {
	cout << "이름: " << GetName() << endl;
	cout << "주소: " << GetAddress() << endl;
	cout << "학과: " << major << endl;
	cout << "학년: " << grade << endl << endl;
}