#include "Bullet.h"

using namespace std;

Bullet::Bullet() : Sprite() {
	speed = NULL;
}

Bullet::Bullet(const char * _tag, const char * _name, bool _active, float _posX, float _posY, float _speed) : Sprite(_tag, _name, _active, _posX, _posY) {
	speed = _speed;
}

Bullet::~Bullet() {
	cout << "[Delete] Bullet Class" << endl;
}

void Bullet::Start() {
	SetSprite("Asset/Bullet.bmp");
}

void Bullet::Update() {
	if (GetActive() == false)
		return;

	if (GetPosY() <= -30.0f)
		return;

	Translate(0.0f, -(speed * GetDeltaTime()));
}