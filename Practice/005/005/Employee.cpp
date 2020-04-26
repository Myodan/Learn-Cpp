#include "Employee.h"

using namespace std;

Employee::Employee() {
	uid = NULL;
	name = NULL;
	age = NULL;
	department = NULL;
	position = NULL;
	address = NULL;
}

Employee::Employee(int _uid, const char * _name, int _age, const char * _department, const char * _position, const char * _address) {
	uid = _uid;
	name = _name;
	age = _age;
	department = _department;
	position = _position;
	address = _address;
}

Employee::~Employee() {

}

/* Getter */
int Employee::GetUid() { return uid; }
const char * Employee::GetName() { return name; }
int Employee::GetAge(){ return age; }
const char * Employee::GetDepartment() { return department; }
const char * Employee::GetPosition(){ return position; }
const char * Employee::GetAddress(){ return address; }

/* Setter */
void Employee::SetUid(int _uid){ uid = _uid; }
void Employee::SetName(const char * _name) { name = _name; }
void Employee::SetAge(int _age) { age = _age; }
void Employee::SetDepartment(const char * _department)  { department = _department; }
void Employee::SetPosition(const char * _position) { position = _position; }
void Employee::SetAddress(const char * _address) { address = _address; }

void Employee::Print() {
	cout << "��ȣ: " << uid << endl;
	cout << "�̸�: " << name << endl;
	cout << "����: " << age << endl;
	cout << "�μ�: " << position << endl;
	cout << "��å: " << department << endl;
	cout << "�ּ�: " << address << endl << endl;
}