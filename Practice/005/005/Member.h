#pragma once

#include <iostream>

class Member {
private:
	const char * name;
	const char * nationality;
	const char * division;

public:
	Member();
	Member(const char * _name, const char * _nationality, const char * _division);
	~Member();

	/* Getter */
	const char * GetName();
	const char * GetNationality();
	const char * GetDivision();

	/* Setter */
	void SetName(const char * _name);
	void SetNationality(const char * _nationality);
	void SetDivision(const char * _division);

	void Print();
};