#pragma once

#include "Timer.h"
#include "ObjectManager.h"

#include "Sprite.h"
#include "Bullet.h"

class Player : public Sprite {
private:
	float speed;
	float fireDelay;
	float fireTimer;

public:
	Player();
	Player(const char * _tag, const char * _name, bool _active, float _posX, float _posY, float _speed, float _fireTimer);
	virtual ~Player();

	void Start();
	void Update();
};
