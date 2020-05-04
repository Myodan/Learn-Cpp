#include <iostream>
#include <string>
#include <vector> // STL(Standard Template Library) vector

using namespace std; // STL vector std

void Q_001();
void Q_002();

int main() {
	Q_001();
	Q_002();

	return 0;
}

void Q_001() {
	string data[] = { "유재석", "박명수", "박명수", "정준하", "노홍철" };
	vector<string> name = vector<string>();

	for (int i = 0; i < sizeof(data) / sizeof(string); i++) {
		name.push_back(data[i]);
	}

	for (unsigned int i = 0; i < name.size(); i++) {
		cout << name.at(i) << endl;
	}
}

void Q_002() {
	int data[] = { 45, 78, -76, 56, -100, -45 };
	vector<int> num = vector<int>();

	for (unsigned int i = 0; i < sizeof(data) / sizeof(int); i++) {
		num.push_back(data[i]);
	}

	for (unsigned int i = 0; i < num.size(); i++) {
		if (num.at(i) > 0) {
			continue;
		}

		num.erase(num.begin() + i);
		i--;
	}

	for (unsigned int i = 0; i < num.size(); i++) {
		cout << num.at(i) << endl;
	}
}