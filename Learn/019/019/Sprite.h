#pragma once

#include "bitmap.h"
#include "GameObject.h"

using namespace std;

class Sprite : public GameObject {
private:
	Image * sprite;

public:
	Sprite();
	Sprite(string _tag, string _name, bool _active, float _posX, float _posY);
	virtual ~Sprite();

	Image * GetSprite();

	void SetSprite(string _path);

	void Draw();
};