#include "Item.h"

Item::Item() {
	name = "";
	price = NULL;
	weight = NULL;
	effect = "";
}

Item::Item(string _name, int _price, float _weight, string _effect) {
	name = _name;
	price = _price;
	weight = _weight;
	effect = _effect;
}

Item::~Item() {

}

void Item::print() {
	cout << "�̸�: " << name << endl;
	cout << "����: " << price << endl;
	cout << "����: " << weight << endl;
	cout << "ȿ��: " << effect << endl;
	cout << endl;
}