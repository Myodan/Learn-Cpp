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
	cout << "이름: " << getName() << endl;
	cout << "선 색상: " << getLineColor() << endl;
	cout << "가로: " << getWidth() << endl;
	cout << "세로: " << getHeight() << endl;
	cout << "면 색상: " << solidColor << endl;
}