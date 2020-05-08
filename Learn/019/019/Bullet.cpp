#include "Bullet.h"

Bullet::Bullet() : Sprite() {
	speed = NULL;
}

Bullet::Bullet(string _tag, string _name, bool _active, float _posX, float _posY, float _speed) : Sprite(_tag, _name, _active, _posX, _posY) {
	speed = _speed;
}

Bullet::~Bullet() {

}

void Bullet::Start() {
	SetSprite("Asset/Bullet.bmp");
}

void Bullet::Update() {
	if (GetActive() == false) {
		return;
	}

	if (GetPosY() <= -30.0f) {
		ObjectManager::Delete(this);
		return;
	}

	Translate(0.0f, -(speed * Timer::GetDeltaTime()));
}