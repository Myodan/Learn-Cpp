#include "BlackMage.h"

using namespace std;

BlackMage::BlackMage() : Mage() {
	specialAbility = NULL;
}

BlackMage::BlackMage(const char * _tag, const char * _name, float _mana, const char * _specialAbility) : Mage(_tag, _name, _mana) {
	specialAbility = _specialAbility;
}

BlackMage::~BlackMage() {

}

void BlackMage::print() {
	cout << "태그: " << getTag() << endl;
	cout << "이름: " << getName() << endl;
	cout << "마력: " << getMana() << endl;
	cout << "치유력: " << specialAbility << endl;
}