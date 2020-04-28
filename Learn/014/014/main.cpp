#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
T rect(T width, T height) {
	return width * height;
}

template<typename T1, typename T2>
T1 tri(T2 width, T2 height) {
	return width * height / 2.0f;
}

template<typename T1, typename T2>
T1 circle(T2 radius) {
	return radius * radius * M_PI;
}

template<typename T>
void arrPrint(T * arr, int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
	cout << endl;
}

template<typename T>
float arrAvg(T * arr, int length) {
	float avg = 0.0f;

	for (int i = 0; i < length; i++)
		avg += arr[i];

	avg /= length;

	return avg;
}

template<typename T>
void swap(T * data0, T * data1) {
	T * temp = *data0;
	*data0 = *data1;
	*data1 = *temp;
}

int main() {
	cout << "[정수] 사각형의 넓이 값: " << rect<int>(100, 200) << endl;
	cout << "[실수] 사각형의 넓이 값: " << rect<float>(100.5f, 200.5f) << endl;
	cout << "[정수] 삼각형의 넓이 값: " << tri<float, int>(100, 200) << endl;
	cout << "[실수] 삼각형의 넓이 값: " << tri<float, float>(100.5f, 200.5f) << endl;
	cout << "[정수] 원의 넓이 값: " << circle<float, int>(30) << endl;
	cout << "[실수] 원의 넓이 값: " << circle<float, float>(25.5f) << endl;

	int arr1[] = { 11, 12, 13, 14, 15 };
	float arr2[] = { 11.5f, 12.5f, 13.5f, 14.5f, 15.5f, 16.5f, 17.5f };

	cout << "arr1 의 값: "; arrPrint<int>(arr1, sizeof(arr1) / sizeof(int));
	cout << "arr2 의 값: "; arrPrint<float>(arr2, sizeof(arr2) / sizeof(float));

	int arr3[] = { 10, 20, 30, 40 };
	float arr4[] = { 10.5f, 20.5f, 30.5f, 40.5f, 50.5f };

	cout << "arr3 의 평균 값: " << arrAvg<int>(arr3, sizeof(arr3) / sizeof(int)) << endl;
	cout << "arr4 의 평균 값: " << arrAvg<float>(arr4, sizeof(arr4) / sizeof(float)) << endl;

	int data0 = 100, data1 = 200;
	float data2 = 100.5f, data3 = 200.5f;

	cout << "[정수] swap 함수 호출 전: " << data0 << ", " << data1 << endl;
	cout << "[실수] swap 함수 호출 전: " << data2 << ", " << data3 << endl;

	swap<int>(data0, data1);
	swap<float>(data2, data3);

	cout << "[정수] swap 함수 호출 후: " << data0 << ", " << data1 << endl;
	cout << "[실수] swap 함수 호출 후: " << data2 << ", " << data3 << endl;

	return 0;
}