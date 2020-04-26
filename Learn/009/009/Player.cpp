#include "Player.h"

using namespace std;

Player::Player() : GameObject() {
	gold = NULL;
}

Player::Player(const char * _tag, const char * _name, int _gold) : GameObject(_tag, _name) {
	gold = _gold;
}

Player::~Player() {

}

int Player::getGold() {
	return gold;
}

void Player::print() {
	cout << "�±�: " << getTag() << endl;
	cout << "�̸�: " << getName() << endl;
	cout << "������: " << gold << endl;
}