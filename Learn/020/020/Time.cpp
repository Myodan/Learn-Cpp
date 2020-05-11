#include "Time.h"

Time::Time(int h, int m) {
	this->h = h;
	this->m = m;
}

Time::~Time() {

}

Time Time::operator + (Time time) {
	return Time(this->h + time.h, this->m + time.m);
}

Time Time::operator - (Time time) {
	return Time(this->h - time.h, this->m - time.m);
}

Time Time::operator * (Time time) {
	return Time(this->h * time.h, this->m * time.m);
}

Time Time::operator / (Time time) {
	return Time(this->h / time.h, this->m / time.m);
}

Time Time::operator * (float value) {
	return Time(this->h * value, this->m * value);
}

void Time::print() {
	cout << h << ":" << m << endl;
}

Time operator * (float value, Time time) {
	return time * value;
}