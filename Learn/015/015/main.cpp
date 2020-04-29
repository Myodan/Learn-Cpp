#include <iostream>
#include <string>

#define M_PI 3.141592

using namespace std;

template<typename T> 
class Rect {
private:
	T width;
	T height;

public:
	Rect() {
		width = NULL;
		height = NULL;
	}

	Rect(T _width, T _height) {
		width = _width;
		height = _height;
	}

	virtual ~Rect() {

	}

	T getWidth() {
		return width;
	}

	T getHeight() {
		return height;
	}

	T getArea() {
		return width * height;
	}
};

template<typename T>
class Circle {
private:
	T radius;

public:
	Circle() {
		radius = NULL;
	}

	Circle(T _radius) {
		radius = _radius;
	}

	virtual ~Circle() {

	}

	T getRadius() {
		return radius;
	}

	void setRadius(T _radius) {
		radius = _radius;
	}

	float getArea() {
		return radius * radius * M_PI;
	}
};

template<typename T>
class Container {
private:
	int index;
	T data[999];
public:
	Container() {
		index = 0;
	}

	virtual ~Container() {

	}

	void push_back(T value) {
		data[index] = value;
		index++;
	}

	T at(int index) {
		return data[index];
	}

	int size() {
		return index;
	}
};

int main() {
	//Rect<int> * rectInt = new Rect<int>(10, 10);
	//cout << "[����] �簢���� ����: " << rectInt->getArea() << endl;
	//delete rectInt;
	//Rect<float> * rectFloat = new Rect<float>(10.5f, 10.5f);
	//cout << "[�Ǽ�] �簢���� ����: " << rectFloat->getArea() << endl;
	//delete rectFloat;
	//Circle<int> * circleInt = new Circle<int>(10);
	//cout << "[����] ���� ����: " << circleInt->getArea() << endl;
	//delete circleInt;
	//Circle<float> * circleFloat = new Circle<float>(10.0f);
	//cout << "[����] ���� ����: " << circleFloat->getArea() << endl;
	//delete circleFloat;

	Container<float> containerFloat = Container<float>();

	containerFloat.push_back(0.1f);
	containerFloat.push_back(0.2f);
	containerFloat.push_back(0.3f);
	containerFloat.push_back(0.4f);
	containerFloat.push_back(0.5f);

	for (int i = 0; i < containerFloat.size(); i++) {
		cout << containerFloat.at(i) << " ";
	}
	cout << endl;

	Container<string> containerString = Container<string>();

	containerString.push_back("���缮");
	containerString.push_back("�ڸ��");
	containerString.push_back("������");
	containerString.push_back("������");
	containerString.push_back("��ȫö");
	containerString.push_back("����");

	for (int i = 0; i < containerString.size(); i++) {
		cout << containerString.at(i) << " ";
	}
	cout << endl;

	// 1024�� ���
	Container<int> containerInt0 = Container<int>();

	for (int i = 1; i <= 1024; i++) {
		if (1024 % i == 0) {
			containerInt0.push_back(i);
		}
	}

	for (int i = 0; i < containerInt0.size(); i++) {
		cout << containerInt0.at(i) << " ";
	}
	cout << endl;


	// 100�� 3�� ��� �Ǵ� 4�� ���
	Container<int> containerInt1 = Container<int>();

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 || i % 4 == 0)
			containerInt1.push_back(i);
	}

	for (int i = 0; i < containerInt1.size(); i++) {
		cout << containerInt1.at(i) << " ";
	}
	cout << endl;

	return 0;
}