#pragma once

#include "Shape.h"

class Rectangle : public Shape {
private:
	float width;
	float height;

public:
	Rectangle();

	Rectangle(const char * _name, const char * _lineColor, float _width, float _height);

	~Rectangle();

	float getWidth();

	float getHeight();

	void draw();
};