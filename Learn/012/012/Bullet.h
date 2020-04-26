#pragma once

#include "Timer.h"

#include "Sprite.h"

class Bullet : public Sprite {
private:
	float speed;

public:
	Bullet();
	Bullet(const char * _tag, const char * _name, bool _active, float _posX, float _posY, float _speed);
	virtual ~Bullet();

	void Start();
	void Update();
};