#pragma once

#include "Timer.h"
#include "Sprite.h"

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