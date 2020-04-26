#include "Member.h"

using namespace std;

Member::Member() {
	name = NULL;
	nationality = NULL;
	division = NULL;
}

Member::Member(const char * _name, const char * _nationality, const char * _division) {
	name = _name;
	nationality = _nationality;
	division = _division;
}

Member::~Member() {

}

/* Getter */
const char * Member::GetName() { return name; }
const char * Member::GetNationality() { return nationality; }
const char * Member::GetDivision() { return division; }

/* Setter */
void Member::SetName(const char * _name) { name = _name; }
void Member::SetNationality(const char * _nationality) { nationality = _nationality; }
void Member::SetDivision(const char * _division) { division = _division; }

void Member::Print() {
	cout << "�̸�: " << name << endl;
	cout << "����: " << nationality << endl;
	cout << "�Ҽ�: " << division << endl << endl;
}