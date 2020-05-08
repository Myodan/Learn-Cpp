#pragma once

#include "ObjectManager.h"
#include "Timer.h"
#include "Sprite.h"
#include "Bullet.h"

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
