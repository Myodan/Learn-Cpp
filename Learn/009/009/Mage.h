#pragma once

#include "GameObject.h"

class Mage : public GameObject {
private:
	float mana;

public:
	Mage();
	Mage(const char * _tag, const char * _name, float _mana);
	~Mage();

	float getMana();

	void print();
};