#pragma once

#include <iostream>
#include <string>

using namespace std;

class Item {
private:
	string name;
	int price;
	float weight;
	string effect;

public:
	Item();
	Item(string _name, int _price, float _weight, string _effect);
	virtual ~Item();

	void print();
};