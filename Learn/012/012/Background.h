#pragma once

#include "Sprite.h"

class Background : public Sprite {
public:
	Background();
	Background(const char * _tag, const char * _name, bool _active, float _posX, float _posY);
	virtual ~Background();

	void Start();
	void Update();
};