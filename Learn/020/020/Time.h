#pragma once

#include <iostream>

using namespace std;

class Time {
private:
	int h;
	int m;

public:
	Time(int h, int m);
	virtual ~Time();

	Time operator + (Time time);
	Time operator - (Time time);
	Time operator * (Time time);
	Time operator / (Time time);
	Time operator * (float value);

	void print();
};

Time operator * (float value, Time time);