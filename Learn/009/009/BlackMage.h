#pragma once

#include "Mage.h"

class BlackMage : public Mage {
private:
	const char * specialAbility;

public:
	BlackMage();
	BlackMage(const char * _tag, const char * _name, float _mana, const char * _specialAbility);
	~BlackMage();

	void print();
};