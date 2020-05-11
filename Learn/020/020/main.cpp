#include <iostream>
#include <string>

#include "Time.h"
#include "Vector3.h"

using namespace std;

void Q_001();
void Q_002();
void Q_003();
void Q_004();

int main() {
	Q_004();

	return 0;
}

void Q_001() {
	Time time1 = Time(1, 30);
	Time time2 = Time(2, 40);
	Time time3 = time1 + time2;
	Time time4 = time2 + time1;
	Time time5 = time1 - time2;
	Time time6 = time2 - time1;
	Time time7 = time1 * 0.5f;
	Time time8 = 0.5f * time1;

	time3.print();
	time4.print();
	time5.print();
	time6.print();
	time7.print();
	time8.print();
}
void Q_002() {
	Vector3 vec1 = Vector3(0.1f, 0.2f, 0.3f);
	Vector3 vec2 = Vector3(1.1f, 1.2f, 1.3f);

	Vector3 vec3 = vec1 + vec2;
	Vector3 vec4 = vec2 + vec1;
	Vector3 vec5 = vec1 - vec2;
	Vector3 vec6 = vec2 - vec1;
	Vector3 vec7 = vec1 * vec2;
	Vector3 vec8 = vec2 * vec1;
	Vector3 vec9 = vec1 / vec2;
	Vector3 vec10 = vec2 / vec1;

	cout << "vec1 = "; vec1.print();
	cout << "vec2 = "; vec2.print();
	cout << endl;
	cout << "vec1 + vec2 = "; vec3.print();
	cout << "vec2 + vec1 = "; vec4.print();
	cout << "vec1 - vec2 = "; vec5.print();
	cout << "vec2 - vec1 = "; vec6.print();
	cout << "vec1 * vec2 = "; vec7.print();
	cout << "vec2 * vec1 = "; vec8.print();
	cout << "vec1 / vec2 = "; vec9.print();
	cout << "vec2 / vec1 = "; vec10.print();
}
void Q_003() {
	Vector3 player = Vector3(0, 0, 0);
	player.print();
	player = player + Vector3(-10, 0, 0);
	player.print();
	player = player + Vector3(0, 15, 0);
	player.print();
}
void Q_004() {
	Vector3 monster = Vector3(-10, 0, -10);
	cout << "0 : "; monster.print();
	for (int i = 0; i < 10; i++) {
		monster = monster + Vector3(0.15f, 0, 0);
		cout << i + 1 << " : "; monster.print();
	}
}