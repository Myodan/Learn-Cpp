#pragma once

#include "Shape.h"

class Circle : public Shape {
private:
	float radius;

public:
	Circle();
	Circle(const char * _name, const char * _lineColor, float _radius);
	~Circle();

	void draw();
};