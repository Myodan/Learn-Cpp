#pragma once

#include <iostream>

using namespace std;

class Vector3 {
private:
	float x, y, z;

public:
	Vector3(float x, float y, float z);
	virtual ~Vector3();

	Vector3 operator + (Vector3 vec);
	Vector3 operator - (Vector3 vec);
	Vector3 operator * (Vector3 vec);
	Vector3 operator / (Vector3 vec);

	void print();
};