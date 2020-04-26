#include "Background.h"

using namespace std;

Background::Background() {

}

Background::Background(const char * _tag, const char * _name, bool _active, float _posX, float _posY) : Sprite(_tag, _name, _active, _posX, _posY) {

}

Background::~Background() {
	cout << "[Delete] Background Class" << endl;
}

void Background::Start() {
	SetSprite("Asset/Background.bmp");
}

void Background::Update() {

}