#include <iostream>
#include <string>

#include "Math.h"

using namespace std;

int main() {
	cout << "�簢���� ���� = " << Math::rect(100, 200) << endl;
	cout << "�ﰢ���� ���� = " << Math::tri(100, 200) << endl;

	string str0;
	string str1 = "�޷�";

	cout << "���ڿ� �Է�: ";
	cin >> str0;

	cout << "�Է� ���ڿ�: " << str0 << endl;

	if (str0 == str1) {
		cout << "�� ���ڿ��� �����ϴ�. (1)" << endl;
	}
	else {
		cout << "�� ���ڿ��� �ٸ��ϴ�. (1)" << endl;
	}

	if (str0 == "�ٺ�") {
		cout << "�� ���ڿ��� �����ϴ�. (2)" << endl;
	}
	else {
		cout << "�� ���ڿ��� �ٸ��ϴ�. (2)" << endl;
	}

	cout << "���ڿ��� �޸� �Ҵ� ũ��: " << str0.size() << endl;
	cout << "���ڿ��� ����: " << str0.length() << endl;

	string str3 = str0;

	cout << "������ ���ڿ�: " << str3 << endl;

	cout << "������ ���ڿ��� ���� ���: " << str0 + str3 << endl;

	printf("C ��� ��°�: %s\n", str0.data());

	return 0;
}