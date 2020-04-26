#pragma once

#include "BitmapFile.h"
#include "GameObject.h"

class Sprite : public GameObject {
private:
	Image * sprite;

public:
	Sprite();
	Sprite(const char * _tag, const char * _name, bool _active, float _posX, float _posY);
	virtual ~Sprite();

	Image * GetSprite();

	void SetSprite(const char * _path);

	void Draw();
};