#include <iostream>

#include "Human.h"
#include "Monster.h"

int main() {
	GameObject * human = new Human("ȫ�浿", 0, "����");
	GameObject * monster = new Monster("����", 1, "��ũ");

	human->print();
	monster->print();

	return 0;
}