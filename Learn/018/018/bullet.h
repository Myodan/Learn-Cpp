#pragma once

#include "timer.h"
#include "objectmanager.h"

#include "sprite.h"

using namespace std;

class Bullet : public Sprite {
private:
	float speed;

public:
	Bullet();
	Bullet(string _tag, string _name, bool _active, float _posX, float _posY, float _speed);
	virtual ~Bullet();

	void Start();
	void Update();
};