#pragma once

#include "GameObject.h"
#include "BitmapFile.h"

class Background : public GameObject {
private:
	Image * sprite;

public:
	Background();
	Background(const char * _tag, const char * _name, bool _active, float _posX, float _posY);
	~Background();

	Image * GetSprite();

	void Start();
	void Update();
	void Draw();
};