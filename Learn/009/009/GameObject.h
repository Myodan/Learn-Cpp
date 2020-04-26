#pragma once

#include <iostream>

class GameObject {
private:
	const char * tag;
	const char * name;

public:
	GameObject();
	GameObject(const char * _tag, const char * _name);
	~GameObject();

	const char * getTag();
	const char * getName();

	virtual void print();
};