#pragma once

#include "Sprite.h"
#include "Timer.h"

class Player : public Sprite {
private:
	float speed;

public:
	Player();
	Player(const char * _tag, const char * _name, bool _active, float _posX, float _posY, float _speed);
	virtual ~Player();

	void Start();
	void Update();
};
