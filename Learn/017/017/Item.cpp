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
	cout << "이름: " << name << endl;
	cout << "가격: " << price << endl;
	cout << "무게: " << weight << endl;
	cout << "효과: " << effect << endl;
	cout << endl;
}