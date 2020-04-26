#include "Circle.h"

using namespace std;

Circle::Circle() : Shape() {
	radius = NULL;
}

Circle::Circle(const char * _name, const char * _lineColor, float _radius) : Shape(_name, _lineColor) {
	radius = _radius;
}

Circle::~Circle() {

}

void Circle::draw() {
	cout << "�̸�: " << getName() << endl;
	cout << "�� ����: " << getLineColor() << endl;
	cout << "������: " << radius << endl;
}