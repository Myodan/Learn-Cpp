#pragma once

#include <iostream>
#include <string>

using namespace std;

class Monster {
private:
	string tag;
	string name;
	int health;

public:
	Monster();
	Monster(string _tag, string _name, int _health);
	virtual ~Monster();

	string getTag();
	string getName();
	int getHealth();

	void print();
};