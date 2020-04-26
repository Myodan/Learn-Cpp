#pragma once

#include "Mage.h"

class WhiteMage : public Mage {
private:
	float healingPower;

public:
	WhiteMage();
	WhiteMage(const char * _tag, const char * _name, float _mana, float _healingPower);
	~WhiteMage();

	void print();
};