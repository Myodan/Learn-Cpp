#include <iostream>

#include "CStudent.h"
#include "CStaff.h"

int main() {
	CStudent * student[] = {
		new CStudent("홍길동", "대전", "경제", 2),
		new CStudent("채지수", "서울", "체육", 4)
	};

	CStaff * staff[] = {
		new CStaff("김병준", "대전", "행정", "대리"),
		new CStaff("한강", "대구", "교무", "교감")
	};

	for (int i = 0; i < sizeof(student) / sizeof(CStudent *); i++) {
		student[i]->Print();
	}

	for (int i = 0; i < sizeof(staff) / sizeof(CStaff *); i++) {
		staff[i]->Print();
	}

	return 0;
}