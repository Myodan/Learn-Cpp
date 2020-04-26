#include "Mage.h"

using namespace std;

Mage::Mage() : GameObject() {
	mana = NULL;
}

Mage::Mage(const char * _tag, const char * _name, float _mana) : GameObject(_tag, _name) {
	mana = _mana;
}

Mage::~Mage() {

}

float Mage::getMana() {
	return mana;
}

void Mage::print() {
	cout << "태그: " << getTag() << endl;
	cout << "이름: " << getName() << endl;
	cout << "마력: " << mana << endl;
}