#include "sprite.h"

Sprite::Sprite() : GameObject() {
	sprite = new Image();
}

Sprite::Sprite(string _tag, string _name, bool _active, float _posX, float _posY) : GameObject(_tag, _name, _active, _posX, _posY) {
	sprite = new Image();
}

Sprite::~Sprite() {
	delete[] sprite->argb;
	delete sprite;
}

Image * Sprite::GetSprite() {
	return sprite;
}

void Sprite::SetSprite(string _path) {
	BitmapLoad(sprite, _path.data());
}

void Sprite::Draw() {
	if (GetActive() == false) return;

	BitmapDraw(sprite, GetPosX(), GetPosY());
}