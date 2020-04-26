#include "GameObject.h"

using namespace std;

GameObject::GameObject() {
	tag = NULL;
	name = NULL;
	active = NULL;
	posX = NULL;
	posY = NULL;
}

GameObject::GameObject(const char * _tag, const char * _name, bool _active, float _posX, float _posY) {
	tag = _tag;
	name = _name;
	active = _active;
	posX = _posX;
	posY = _posY;
}

GameObject::~GameObject() {
	cout << "[Delete] GameObject Class" << endl;
}

const char * GameObject::GetTag() { return tag; }
const char * GameObject::GetName() { return name; }
bool GameObject::GetActive() { return active; }
float GameObject::GetPosX() { return posX; }
float GameObject::GetPosY() { return posY; }

void GameObject::Start() {

}

void GameObject::Update() {

}

void GameObject::Draw() {

}

void GameObject::Translate(float _deltaX, float _deltaY) {
	posX += _deltaX;
	posY += _deltaY;
}