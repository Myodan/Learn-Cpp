#pragma once

#include "GameObject.h"

class Player : public GameObject{
private:
	int gold;

public:
	Player();
	Player(const char * _tag, const char * _name, int _gold);
	~Player();

	int getGold();

	void print();
};