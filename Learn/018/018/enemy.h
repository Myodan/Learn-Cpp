#pragma once

#include "timer.h"
#include "sprite.h"

class Enemy : public Sprite {
private:
	bool state;
	float speed;

public:
	Enemy();
	Enemy(string _tag, string _name, bool _active, float _posX, float _posY, float _speed);
	virtual ~Enemy();

	void Start();
	void Update();
};