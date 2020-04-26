#pragma once

#include "GameObject.h"
#include "BitmapFile.h"
#include "Timer.h"

class Player : public GameObject {
private:
	Image * sprite;
	float speed;

public:
	Player();
	Player(const char * _tag, const char * _name, bool _active, float _posX, float _posY, float _speed);
	~Player();

	Image * GetSprite();

	void Start();
	void Update();
	void Draw();
};
