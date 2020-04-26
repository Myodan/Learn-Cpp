#include "WhiteMage.h"

using namespace std;

WhiteMage::WhiteMage() : Mage() {
	healingPower = NULL;
}

WhiteMage::WhiteMage(const char * _tag, const char * _name, float _mana, float _healingPower) : Mage(_tag, _name, _mana) {
	healingPower = _healingPower;
}

WhiteMage::~WhiteMage() {

}

void WhiteMage::print() {
	cout << "태그: " << getTag() << endl;
	cout << "이름: " << getName() << endl;
	cout << "마력: " << getMana() << endl;
	cout << "치유력: " << healingPower << endl;
}