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
	cout << "�±�: " << getTag() << endl;
	cout << "�̸�: " << getName() << endl;
	cout << "����: " << getMana() << endl;
	cout << "ġ����: " << healingPower << endl;
}