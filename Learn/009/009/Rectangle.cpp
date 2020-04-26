#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() : Shape() {
	width = NULL;
	height = NULL;
}

Rectangle::Rectangle(const char * _name, const char * _lineColor, float _width, float _height) : Shape(_name, _lineColor) {
	width = _width;
	height = _height;
}

Rectangle::~Rectangle() {

}

float Rectangle::getWidth() {
	return width;
}

float Rectangle::getHeight() {
	return height;
}

void Rectangle::draw() {
	cout << "이름: " << getName() << endl;
	cout << "선 색상: " << getLineColor() << endl;
	cout << "가로: " << width << endl;
	cout << "세로: " << height << endl;
}
