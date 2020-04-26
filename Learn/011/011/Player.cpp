#include "Player.h"

using namespace std;

Player::Player() : Sprite() {
	speed = NULL;
}

Player::Player(const char * _tag, const char * _name, bool _active, float _posX, float _posY, float _speed) : Sprite(_tag, _name, _active, _posX, _posY) {
	speed = _speed;
}

Player::~Player() {
	cout << "[Delete] Player Class" << endl;
}

void Player::Start() {
	SetSprite("Asset/PlayerShip.bmp");
}

void Player::Update() {
	float dist = speed * GetDeltaTime();

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
}