#pragma once

#include "Rectangle.h"

class SolidRectangle : public Rectangle {
private:
	const char * solidColor;

public:
	SolidRectangle();

	SolidRectangle(const char * _name, const char * _lineColor, float _width, float _height, const char * _solidColor);

	~SolidRectangle();

	void draw();
};