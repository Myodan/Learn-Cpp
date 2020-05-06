#include <iostream>
#include <string>
#include <vector>

#include "Student.h"
#include "Item.h"
#include "Monster.h"

using namespace std;

void Q_001();
void Q_002();
void Q_003();
void Q_004();
void Q_005();

int main() {
	Q_005();

	return 0;
}

void Q_001() {
	// 선언
	vector<Student> students;

	// 데이터 입력
	students.push_back(Student(1, "유재석", 1, "대전광역시"));
	students.push_back(Student(2, "박명수", 1, "대전광역시"));
	students.push_back(Student(3, "정준하", 1, "세종시"));

	// 데이터 출력
	for (int i = 0; i < students.size(); i++) {
		students.at(i).print();
	}
}

void Q_002() {
	// 선언
	vector<Item> items;

	// 데이터 입력
	items.push_back(Item("약초", 100, 5.5f, "체력회복"));
	items.push_back(Item("갑옷", 2000, 45.0f, "방어력증가"));
	items.push_back(Item("물약", 300, 4.5f, "독치료"));

	// 데이터 출력
	for (int i = 0; i < items.size(); i++) {
		items.at(i).print();
	}
}

void Q_003() {
	// 선언
	vector<Item *> items;

	// 데이터 입력
	items.push_back(new Item("약초", 100, 5.5f, "체력회복"));
	items.push_back(new Item("갑옷", 2000, 45.0f, "방어력증가"));
	items.push_back(new Item("물약", 300, 4.5f, "독치료"));

	// 데이터 출력
	for (int i = 0; i < items.size(); i++) {
		items.at(i)->print();
	}
}

void Q_004() {
	// 선언
	vector<Monster *> monsters;

	// 데이터 입력
	monsters.push_back(new Monster("적몬스터", "유재석", 100));
	monsters.push_back(new Monster("적몬스터", "박명수", 87));
	monsters.push_back(new Monster("적몬스터", "정준하", 93));

	// 데이터 출력
	for (int i = 0; i < monsters.size(); i++) {
		monsters.at(i)->print();
	}

	//데이터 삭제
	for (int i = 0; i < monsters.size(); i++) {
		delete monsters.at(i);
	}
	monsters.clear();

	// 또 다른 데이터 삭제 방법
	//for (int i = 0; monsters.begin() + i != monsters.end(); i++) {
	//	delete * (monsters.begin() + i);
	//}
}

void Q_005() {
	// 선언
	vector<Monster *> monsters;

	// 데이터 입력
	monsters.push_back(new Monster("적몬스터", "유재석", 100));
	monsters.push_back(new Monster("적몬스터", "박명수", 87));
	monsters.push_back(new Monster("적몬스터", "정준하", 93));

	//데이터 삭제
	for (int i = 0; i < monsters.size(); i++) {
		if (monsters.at(i)->getName() != "유재석") {
			continue;
		}

		delete monsters.at(i);
		monsters.erase(monsters.begin() + i);
	}

	// 데이터 출력
	for (int i = 0; i < monsters.size(); i++) {
		monsters.at(i)->print();
	}
}