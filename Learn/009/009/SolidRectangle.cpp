#include "SolidRectangle.h"

using namespace std;

SolidRectangle::SolidRectangle() : Rectangle(){
	solidColor = NULL;
}

SolidRectangle::SolidRectangle(const char * _name, const char * _lineColor, float _width, float _height, const char * _solidColor) : Rectangle(_name, _lineColor, _width, _height) {
	solidColor = _solidColor;
}

SolidRectangle::~SolidRectangle() {

}

void SolidRectangle::draw() {
	cout << "�̸�: " << getName() << endl;
	cout << "�� ����: " << getLineColor() << endl;
	cout << "����: " << getWidth() << endl;
	cout << "����: " << getHeight() << endl;
	cout << "�� ����: " << solidColor << endl;
}