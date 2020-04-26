#include <iostream>

#include "Employee.h"
#include "Member.h"

#define MAX_LENGTH 32

using namespace std;

int main() {
	Employee * employees[] = {
		new Employee(1, "유재석", 31, "영업부", "부장", "대전광역시 중구 선화동"),
		new Employee(2, "박명수", 32, "영업부", "과장", "대전광역시 중구 은행동"),
		new Employee(3, "정준하", 33, "영업부", "대리", "대전광역시 동구")
	};

	Member * members[] = {
		new Member("수호", "대한민국", "EXO-K"),
		new Member("찬열", "대한민국", "EXO-K"),
		new Member("카이", "대한민국", "EXO-K"),
		new Member("시우민", "대한민국", "EXO-M"),
		new Member("첸", "대한민국", "EXO-M"),
		new Member("백현", "대한민국", "EXO-K"),
		new Member("디오", "대한민국", "EXO-K"),
		new Member("세훈", "대한민국", "EXO-K"),
		new Member("레이", "중국", "EXO-M"),
		new Member("타오", "중국", "EXO-M")
	};

	int intBuffer;
	char strBuffer[MAX_LENGTH];

	while (true) {
		cout << "[기능 목록]" << endl;
		cout << "(1) 사원 목록 출력" << endl;
		cout << "(2) 사원 검색(번호)" << endl;
		cout << "(3) 사원 검색(이름)" << endl;
		cout << "(4) 종료" << endl << endl;
		cout << "원하는 기능의 번호를 입력하시오: ";
		cin >> intBuffer;

		if (intBuffer == 1) {
			for (int i = 0; i < sizeof(employees) / sizeof(Employee *); i++) {
				employees[i]->Print();
			}
		}
		else if (intBuffer == 2) {
			cout << "검색을 원하는 사원의 번호를 입력하시오: ";
			cin >> intBuffer;

			for (int i = 0; i < sizeof(employees) / sizeof(Employee *); i++) {
				if (employees[i]->GetUid() != intBuffer)
					continue;

				employees[i]->Print();
				break;
			}
		}
		else if (intBuffer == 3) {
			cout << "검색을 원하는 사원의 이름을 입력하시오: ";
			cin.ignore(); cin.getline(strBuffer, MAX_LENGTH);

			for (int i = 0; i < sizeof(employees) / sizeof(Employee *); i++) {
				if (strcmp(employees[i]->GetName(), strBuffer) != 0)
					continue;

				employees[i]->Print();
				break;
			}
		}
		else if (intBuffer == 4) {
			break;
		}
		else {
			cout << "알 수 없는 번호입니다." << endl;
		}
	}

	for (int i = 0; i < sizeof(employees) / sizeof(Employee *); i++)
		delete employees[i];

	while (true) {
		cout << "[기능 목록]" << endl;
		cout << "(1) 모든 멤버 출력" << endl;
		cout << "(2) EXO-K 멤버 출력" << endl;
		cout << "(3) EXO-M 멤버 출력" << endl;
		cout << "(4) 한국 멤버 출력" << endl;
		cout << "(5) 중국 멤버 출력" << endl;
		cout << "(6) 종료" << endl << endl;
		cout << "원하는 기능의 번호를 입력하시오: ";
		cin >> intBuffer;

		if (intBuffer == 1) {
			for (int i = 0; i < sizeof(members) / sizeof(Member *); i++) {
				members[i]->Print();
			}
		}
		else if (intBuffer == 2) {
			for (int i = 0; i < sizeof(members) / sizeof(Member *); i++) {
				if (strcmp(members[i]->GetDivision(), "EXO-K") != 0)
					continue;

				members[i]->Print();
			}
		}
		else if (intBuffer == 3) {
			for (int i = 0; i < sizeof(members) / sizeof(Member *); i++) {
				if (strcmp(members[i]->GetDivision(), "EXO-M") != 0)
					continue;

				members[i]->Print();
			}
		}
		else if (intBuffer == 4) {
			for (int i = 0; i < sizeof(members) / sizeof(Member *); i++) {
				if (strcmp(members[i]->GetNationality(), "대한민국") != 0)
					continue;

				members[i]->Print();
			}
		}
		else if (intBuffer == 5) {
			for (int i = 0; i < sizeof(members) / sizeof(Member *); i++) {
				if (strcmp(members[i]->GetNationality(), "중국") != 0)
					continue;

				members[i]->Print();
			}
		}
		else if (intBuffer == 6) {
			break;
		}
		else {
			cout << "알 수 없는 번호입니다." << endl;
		}
	}

	for (int i = 0; i < sizeof(members) / sizeof(Member *); i++)
		delete members[i];

	return 0;
}