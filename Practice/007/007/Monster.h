#pragma once

#include "GameObject.h"

class Monster : public GameObject {
private:
	const char * tribe;

public:
	Monster();
	Monster(const char * _name, int _tag, const char * _tribe);
	virtual ~Monster();

	void print();
};