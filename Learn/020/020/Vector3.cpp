#include "Vector3.h"

Vector3::Vector3(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3::~Vector3() {

}

Vector3 Vector3::operator + (Vector3 vec) {
	return Vector3(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

Vector3 Vector3::operator - (Vector3 vec) {
	return Vector3(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

Vector3 Vector3::operator * (Vector3 vec) {
	return Vector3(this->x * vec.x, this->y * vec.y, this->z * vec.z);
}

Vector3 Vector3::operator / (Vector3 vec) {
	return Vector3(this->x / vec.x, this->y / vec.y, this->z / vec.z);
}

void Vector3::print() {
	cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}