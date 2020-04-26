#include <iostream>

#include "Employee.h"
#include "Member.h"

#define MAX_LENGTH 32

using namespace std;

int main() {
	Employee * employees[] = {
		new Employee(1, "���缮", 31, "������", "����", "���������� �߱� ��ȭ��"),
		new Employee(2, "�ڸ��", 32, "������", "����", "���������� �߱� ���ൿ"),
		new Employee(3, "������", 33, "������", "�븮", "���������� ����")
	};

	Member * members[] = {
		new Member("��ȣ", "���ѹα�", "EXO-K"),
		new Member("����", "���ѹα�", "EXO-K"),
		new Member("ī��", "���ѹα�", "EXO-K"),
		new Member("�ÿ��", "���ѹα�", "EXO-M"),
		new Member("þ", "���ѹα�", "EXO-M"),
		new Member("����", "���ѹα�", "EXO-K"),
		new Member("���", "���ѹα�", "EXO-K"),
		new Member("����", "���ѹα�", "EXO-K"),
		new Member("����", "�߱�", "EXO-M"),
		new Member("Ÿ��", "�߱�", "EXO-M")
	};

	int intBuffer;
	char strBuffer[MAX_LENGTH];

	while (true) {
		cout << "[��� ���]" << endl;
		cout << "(1) ��� ��� ���" << endl;
		cout << "(2) ��� �˻�(��ȣ)" << endl;
		cout << "(3) ��� �˻�(�̸�)" << endl;
		cout << "(4) ����" << endl << endl;
		cout << "���ϴ� ����� ��ȣ�� �Է��Ͻÿ�: ";
		cin >> intBuffer;

		if (intBuffer == 1) {
			for (int i = 0; i < sizeof(employees) / sizeof(Employee *); i++) {
				employees[i]->Print();
			}
		}
		else if (intBuffer == 2) {
			cout << "�˻��� ���ϴ� ����� ��ȣ�� �Է��Ͻÿ�: ";
			cin >> intBuffer;

			for (int i = 0; i < sizeof(employees) / sizeof(Employee *); i++) {
				if (employees[i]->GetUid() != intBuffer)
					continue;

				employees[i]->Print();
				break;
			}
		}
		else if (intBuffer == 3) {
			cout << "�˻��� ���ϴ� ����� �̸��� �Է��Ͻÿ�: ";
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
			cout << "�� �� ���� ��ȣ�Դϴ�." << endl;
		}
	}

	for (int i = 0; i < sizeof(employees) / sizeof(Employee *); i++)
		delete employees[i];

	while (true) {
		cout << "[��� ���]" << endl;
		cout << "(1) ��� ��� ���" << endl;
		cout << "(2) EXO-K ��� ���" << endl;
		cout << "(3) EXO-M ��� ���" << endl;
		cout << "(4) �ѱ� ��� ���" << endl;
		cout << "(5) �߱� ��� ���" << endl;
		cout << "(6) ����" << endl << endl;
		cout << "���ϴ� ����� ��ȣ�� �Է��Ͻÿ�: ";
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
				if (strcmp(members[i]->GetNationality(), "���ѹα�") != 0)
					continue;

				members[i]->Print();
			}
		}
		else if (intBuffer == 5) {
			for (int i = 0; i < sizeof(members) / sizeof(Member *); i++) {
				if (strcmp(members[i]->GetNationality(), "�߱�") != 0)
					continue;

				members[i]->Print();
			}
		}
		else if (intBuffer == 6) {
			break;
		}
		else {
			cout << "�� �� ���� ��ȣ�Դϴ�." << endl;
		}
	}

	for (int i = 0; i < sizeof(members) / sizeof(Member *); i++)
		delete members[i];

	return 0;
}