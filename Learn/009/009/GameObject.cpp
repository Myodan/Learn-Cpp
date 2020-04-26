#include "GameObject.h"

using namespace std;

GameObject::GameObject() {
	tag = NULL;
	name = NULL;
}

GameObject::GameObject(const char * _tag, const char * _name) {
	tag = _tag;
	name = _name;
}

GameObject::~GameObject() {

}

const char * GameObject::getTag() {
	return tag;
}

const char * GameObject::getName() {
	return name;
}

void GameObject::print() {
	cout << "태그: " << tag << endl;
	cout << "이름: " << name << endl;
}