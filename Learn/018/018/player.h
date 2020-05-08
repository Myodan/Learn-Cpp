#pragma once

#include "timer.h"
#include "objectmanager.h"

#include "sprite.h"
#include "bullet.h"

using namespace std;

class Player : public Sprite {
private:
	float speed;
	float fireDelay;
	float fireTimer;

public:
	Player();
	Player(string _tag, string _name, bool _active, float _posX, float _posY, float _speed, float _fireTimer);
	virtual ~Player();

	void Start();
	void Update();
};
