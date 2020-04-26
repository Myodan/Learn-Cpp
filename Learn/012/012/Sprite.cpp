#include "Sprite.h"

using namespace std;

Sprite::Sprite() : GameObject() {
	sprite = new Image();
}

Sprite::Sprite(const char * _tag, const char * _name, bool _active, float _posX, float _posY) : GameObject(_tag, _name, _active, _posX, _posY) {
	sprite = new Image();
}

Sprite::~Sprite() {
	delete sprite;
	delete[] sprite->argb;
	cout << "[Delete] Sprite Class" << endl;
}

Image * Sprite::GetSprite() { return sprite; }

void Sprite::SetSprite(const char * _path) {
	BitmapLoad(sprite, _path);
}

void Sprite::Draw() {
	if (GetActive() == false) return;

	BitmapDraw(sprite, GetPosX(), GetPosY());
}