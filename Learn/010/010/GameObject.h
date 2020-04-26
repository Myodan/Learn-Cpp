#pragma once

#include <iostream>

class GameObject {
private:
	const char * tag;
	const char * name;
	bool active;
	float posX;
	float posY;

public:
	GameObject();
	GameObject(const char * _tag, const char * _name, bool _active, float _posX, float _posY);
	~GameObject();

	const char * GetTag();
	const char * GetName();
	bool GetActive();
	float GetPosX();
	float GetPosY();

	virtual void Start();
	virtual	void Update();
	virtual void Draw();

	void Translate(float _deltaX, float _deltaY);
};