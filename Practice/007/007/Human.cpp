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
	cout << "이름: " << getName() << endl;
	cout << "태그: " << getTag() << endl;
	cout << "직업: " << job << endl;
}