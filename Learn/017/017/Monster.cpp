#include "Monster.h"

Monster::Monster() {
	tag = "";
	name = "";
	health = NULL;
}

Monster::Monster(string _tag, string _name, int _health) {
	tag = _tag;
	name = _name;
	health = _health;
}

Monster::~Monster() {
	cout << "[Delete] Monster" << endl;
}

string Monster::getTag() {
	return tag;
}

string Monster::getName() {
	return name;
}

int Monster::getHealth() {
	return health;
}

void Monster::print() {
	cout << "�±�: " << tag << endl;
	cout << "�̸�: " << name << endl;
	cout << "ü��: " << health << endl;
	cout << endl;
}