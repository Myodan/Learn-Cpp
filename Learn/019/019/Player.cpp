#include "Player.h"

Player::Player() : Sprite() {
	speed = NULL;
	fireDelay = NULL;
	fireTimer = NULL;
}

Player::Player(string _tag, string _name, bool _active, float _posX, float _posY, float _speed, float _fireDelay) : Sprite(_tag, _name, _active, _posX, _posY) {
	speed = _speed;
	fireDelay = _fireDelay;
	fireTimer = 0;
}

Player::~Player() {

}

void Player::Start() {
	SetSprite("Asset/PlayerShip.bmp");
}

void Player::Update() {
	if (GetActive() == false)
		return;
	
	float dist = speed * Timer::GetDeltaTime();

	if (GetAsyncKeyState(VK_RIGHT) != 0) {
		Translate(dist, 0);
	}

	if (GetAsyncKeyState(VK_LEFT) != 0) {
		Translate(-dist, 0);
	}

	if (GetAsyncKeyState(VK_DOWN) != 0) {
		Translate(0, dist);
	}

	if (GetAsyncKeyState(VK_UP) != 0) {
		Translate(0, -dist);
	}

	if (GetAsyncKeyState(VK_SPACE) != 0) {
		if (fireTimer >= fireDelay) {
			ObjectManager::Add(new Bullet("Bullet", "Bullet", true, GetPosX() + 20.0f, GetPosY() - 20.0f, 250.0f));
			fireTimer = 0;
		}
	}

	fireTimer += Timer::GetDeltaTime();
}