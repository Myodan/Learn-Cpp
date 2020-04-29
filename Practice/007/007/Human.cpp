#include "Human.h"

using namespace std;

Human::Human() {
	job = NULL;
}

Human::Human(const char * _name, int _tag, const char * _job) : GameObject(_name, _tag) {
	job = _job;
}

Human::~Human() {

}

void Human::print() {
	cout << "�̸�: " << getName() << endl;
	cout << "�±�: " << getTag() << endl;
	cout << "����: " << job << endl;
}