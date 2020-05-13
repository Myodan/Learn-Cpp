#include <iostream>
#include <string>
#include <map>

using namespace std;

class Student {
private:
	int id;
	string name;
	string address;
	int grade;

public:
	Student() {
		this->id = NULL;
		this->name = "";
		this->address = "";
		this->grade = NULL;
	}

	Student(int id, string name, string address, int grade) {
		this->id = id;
		this->name = name;
		this->address = address;
		this->grade = grade;
	}

	virtual ~Student() {

	}

	void print() {
		cout << "(�й�: " << id << ", �̸�: " << name << ", �ּ�: " << address << ", �г�: " << grade << ")" << endl;
	}
};

void Q_001();
void Q_002();
void Q_003();
void Q_004();

int main() {
	Q_001();

	return 0;
}

void Q_001() {
	map<int, string> students;

	students.insert(make_pair(1, "���缮"));
	students.insert(make_pair(2, "�ڸ��"));
	students.insert(make_pair(3, "������"));

	map<int, string>::iterator pair = students.find(5);
	if (pair != students.end()) {
		cout << "key: " << pair->first << ", value: " << pair->second << endl;
	}
	else {
		cout << "ã�� �� ���� �л��Դϴ�." << endl;
	}
}

void Q_002() {
	map<int, string> students;

	students.insert(make_pair(1, "���缮"));
	students.insert(make_pair(2, "�ڸ��"));
	students.insert(make_pair(3, "������"));

	for (map<int, string>::iterator pair = students.begin(); pair != students.end(); pair++) {
		cout << "key: " << pair->first << ", value: " << pair->second << endl;
	}
}

void Q_003() {
	map<int, Student> students;
	
	students.insert(make_pair(1, Student(1, "���缮", "����", 2)));
	students.insert(make_pair(2, Student(2, "�ڸ��", "����", 2)));
	students.insert(make_pair(3, Student(3, "������", "����", 2)));

	map<int, Student>::iterator pair = students.find(3);
	if (pair != students.end()) {
		cout << "key: " << pair->first << ", value: "; pair->second.print();
	}
	else {
		cout << "ã�� �� ���� �л��Դϴ�." << endl;
	}
}

void Q_004() {
	map<int, Student> students;

	students.insert(make_pair(1, Student(1, "���缮", "����", 2)));
	students.insert(make_pair(2, Student(2, "�ڸ��", "����", 2)));
	students.insert(make_pair(3, Student(3, "������", "����", 2)));

	for (map<int, Student>::iterator pair = students.begin(); pair != students.end(); pair++) {
		cout << "key: " << pair->first << ", value: "; pair->second.print();
	}
}