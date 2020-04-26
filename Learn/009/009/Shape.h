#pragma once

#include <iostream>

class Shape {
private:
	const char * name;
	const char * lineColor;

public:
	Shape();
	Shape(const char * _name, const char * _lineColor);
	~Shape();

	const char * getName();
	const char * getLineColor();

	virtual void draw();
};