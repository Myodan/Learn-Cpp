#include "Monster.h"

using namespace std;

Monster::Monster() {
	tribe = NULL;
}

Monster::Monster(const char * _name, int _tag, const char * _tribe) : GameObject(_name, _tag) {
	tribe = _tribe;
}

Monster::~Monster() {

}

void Monster::print() {
	cout << "이름: " << getName() << endl;
	cout << "태그: " << getTag() << endl;
	cout << "종족: " << tribe << endl;
}