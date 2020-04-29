#include "GameObject.h"

using namespace std;

GameObject::GameObject() {
	name = NULL;
	tag = NULL;
}

GameObject::GameObject(const char * _name, int _tag) {
	name = _name;
	tag = _tag;
}

GameObject::~GameObject() {

}

const char * GameObject::getName() {
	return name;
}

int GameObject::getTag() {
	return tag;
}

void GameObject::print() {
	cout << "이름: " << name << endl;
	cout << "태그: " << tag << endl;
}