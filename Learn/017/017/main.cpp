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
	// ����
	vector<Student> students;

	// ������ �Է�
	students.push_back(Student(1, "���缮", 1, "����������"));
	students.push_back(Student(2, "�ڸ��", 1, "����������"));
	students.push_back(Student(3, "������", 1, "������"));

	// ������ ���
	for (int i = 0; i < students.size(); i++) {
		students.at(i).print();
	}
}

void Q_002() {
	// ����
	vector<Item> items;

	// ������ �Է�
	items.push_back(Item("����", 100, 5.5f, "ü��ȸ��"));
	items.push_back(Item("����", 2000, 45.0f, "��������"));
	items.push_back(Item("����", 300, 4.5f, "��ġ��"));

	// ������ ���
	for (int i = 0; i < items.size(); i++) {
		items.at(i).print();
	}
}

void Q_003() {
	// ����
	vector<Item *> items;

	// ������ �Է�
	items.push_back(new Item("����", 100, 5.5f, "ü��ȸ��"));
	items.push_back(new Item("����", 2000, 45.0f, "��������"));
	items.push_back(new Item("����", 300, 4.5f, "��ġ��"));

	// ������ ���
	for (int i = 0; i < items.size(); i++) {
		items.at(i)->print();
	}
}

void Q_004() {
	// ����
	vector<Monster *> monsters;

	// ������ �Է�
	monsters.push_back(new Monster("������", "���缮", 100));
	monsters.push_back(new Monster("������", "�ڸ��", 87));
	monsters.push_back(new Monster("������", "������", 93));

	// ������ ���
	for (int i = 0; i < monsters.size(); i++) {
		monsters.at(i)->print();
	}

	//������ ����
	for (int i = 0; i < monsters.size(); i++) {
		delete monsters.at(i);
	}
	monsters.clear();

	// �� �ٸ� ������ ���� ���
	//for (int i = 0; monsters.begin() + i != monsters.end(); i++) {
	//	delete * (monsters.begin() + i);
	//}
}

void Q_005() {
	// ����
	vector<Monster *> monsters;

	// ������ �Է�
	monsters.push_back(new Monster("������", "���缮", 100));
	monsters.push_back(new Monster("������", "�ڸ��", 87));
	monsters.push_back(new Monster("������", "������", 93));

	//������ ����
	for (int i = 0; i < monsters.size(); i++) {
		if (monsters.at(i)->getName() != "���缮") {
			continue;
		}

		delete monsters.at(i);
		monsters.erase(monsters.begin() + i);
	}

	// ������ ���
	for (int i = 0; i < monsters.size(); i++) {
		monsters.at(i)->print();
	}
}