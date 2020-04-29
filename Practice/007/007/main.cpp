#include <iostream>

#include "Human.h"
#include "Monster.h"

int main() {
	GameObject * human = new Human("홍길동", 0, "전사");
	GameObject * monster = new Monster("몬스터", 1, "오크");

	human->print();
	monster->print();

	return 0;
}