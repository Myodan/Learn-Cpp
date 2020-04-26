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
	cout << "�̸�: " << getName() << endl;
	cout << "�� ����: " << getLineColor() << endl;
	cout << "����: " << width << endl;
	cout << "����: " << height << endl;
}
