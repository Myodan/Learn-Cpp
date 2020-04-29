#pragma once

#include "GameObject.h"

class Human : public GameObject {
private:
	const char * job;

public:
	Human();
	Human(const char * _name, int _tag, const char * _job);
	virtual ~Human();

	void print();
};