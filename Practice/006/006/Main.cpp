#include <iostream>

#include "CStudent.h"
#include "CStaff.h"

int main() {
	CStudent * student[] = {
		new CStudent("ȫ�浿", "����", "����", 2),
		new CStudent("ä����", "����", "ü��", 4)
	};

	CStaff * staff[] = {
		new CStaff("�躴��", "����", "����", "�븮"),
		new CStaff("�Ѱ�", "�뱸", "����", "����")
	};

	for (int i = 0; i < sizeof(student) / sizeof(CStudent *); i++) {
		student[i]->Print();
	}

	for (int i = 0; i < sizeof(staff) / sizeof(CStaff *); i++) {
		staff[i]->Print();
	}

	return 0;
}