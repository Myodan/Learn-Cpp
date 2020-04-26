#include "Background.h"

Background::Background() {
	sprite = new Image();
}

Background::Background(const char * _tag, const char * _name, bool _active, float _posX, float _posY) : GameObject(_tag, _name, _active, _posX, _posY) {
	sprite = new Image();
}

Background::~Background() {
	delete sprite;
}

Image * Background::GetSprite() { return sprite; }

void Background::Start() {
	BitmapLoad(sprite, "Asset/Background.bmp");
}

void Background::Update() {

}

void Background::Draw() {
	BitmapDraw(sprite, GetPosX(), GetPosY());
}