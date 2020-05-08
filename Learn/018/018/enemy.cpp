#include "enemy.h"

using namespace std;

Enemy::Enemy() : Sprite() {
	state = NULL;
	speed = NULL;
}

Enemy::Enemy(string _tag, string _name, bool _active, float _posX, float _posY, float _speed) : Sprite(_tag, _name, _active, _posX, _posY) {
	state = false;
	speed = _speed;
}

Enemy::~Enemy() {
	cout << "[Delete] Enemy Class" << endl;
}

void Enemy::Start() {
	SetSprite("Asset/EnemyShip.bmp");
}

void Enemy::Update() {
	if (GetActive() == false)
		return;

	if (GetPosX() <= 0)
		state = false;

	if (GetPosX() >= 286)
		state = true;

	float dist = speed * GetDeltaTime();
	Translate(state ? -dist : dist, 0);
}