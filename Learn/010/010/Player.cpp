#include "Player.h"

Player::Player() : GameObject(){
	sprite = new Image();
	speed = NULL;
}

Player::Player(const char * _tag, const char * _name, bool _active, float _posX, float _posY, float _speed) : GameObject(_tag, _name, _active, _posX, _posY) {
	sprite = new Image();
	speed = _speed;
}

Player::~Player() {
	delete sprite;
}

Image * Player::GetSprite() { return sprite; }

void Player::Start() {
	BitmapLoad(sprite, "Asset/PlayerShip.bmp");
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

void Player::Draw() {
	if(GetActive() == false) return;

	BitmapDraw(sprite, GetPosX(), GetPosY());
}