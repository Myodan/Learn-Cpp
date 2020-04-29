#pragma once

#include <iostream>

class GameObject {
private:
	const char * name;
	int tag;

public:
	GameObject();
	GameObject(const char * _name, int _tag);
	virtual ~GameObject();

	const char * getName();
	int getTag();

	virtual void print();
};