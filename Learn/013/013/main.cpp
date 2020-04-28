#include <iostream>
#include <string>

#include "Math.h"

using namespace std;

int main() {
	cout << "사각형의 넓이 = " << Math::rect(100, 200) << endl;
	cout << "삼각형의 넓이 = " << Math::tri(100, 200) << endl;

	string str0;
	string str1 = "메롱";

	cout << "문자열 입력: ";
	cin >> str0;

	cout << "입력 문자열: " << str0 << endl;

	if (str0 == str1) {
		cout << "두 문자열은 같습니다. (1)" << endl;
	}
	else {
		cout << "두 문자열은 다릅니다. (1)" << endl;
	}

	if (str0 == "바보") {
		cout << "두 문자열은 같습니다. (2)" << endl;
	}
	else {
		cout << "두 문자열은 다릅니다. (2)" << endl;
	}

	cout << "문자열의 메모리 할당 크기: " << str0.size() << endl;
	cout << "문자열의 길이: " << str0.length() << endl;

	string str3 = str0;

	cout << "복사한 문자열: " << str3 << endl;

	cout << "복사한 문자열과 덧셈 결과: " << str0 + str3 << endl;

	printf("C 언어 출력값: %s\n", str0.data());

	return 0;
}