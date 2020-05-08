#include "background.h"

Background::Background() {

}

Background::Background(string _tag, string _name, bool _active, float _posX, float _posY) : Sprite(_tag, _name, _active, _posX, _posY) {

}

Background::~Background() {

}

void Background::Start() {
	SetSprite("Asset/Background.bmp");
}

void Background::Update() {
	if (GetActive() == false)
		return;

}