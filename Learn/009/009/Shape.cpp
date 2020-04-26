#include "Shape.h"

using namespace std;

Shape::Shape() {
	name = NULL;
	lineColor = NULL;
}

Shape::Shape(const char * _name, const char * _lineColor) {
	name = _name;
	lineColor = _lineColor;
}

Shape::~Shape() {

}

const char * Shape::getName() {
	return name;
}

const char * Shape::getLineColor() {
	return lineColor;
}

void Shape::draw() {
	cout << "�̸�: " << name << endl;
	cout << "�� ����: " << lineColor << endl;
}