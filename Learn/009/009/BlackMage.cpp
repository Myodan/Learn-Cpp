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
	cout << "�±�: " << getTag() << endl;
	cout << "�̸�: " << getName() << endl;
	cout << "����: " << getMana() << endl;
	cout << "ġ����: " << specialAbility << endl;
}