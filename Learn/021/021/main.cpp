#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <queue>

using namespace std;

// QUEUE - First In First Out (FIFO)


void Q_001();
void Q_002();
void Q_003();
void Q_004();
void Q_005();
void Q_006();

int main() {
	Q_006();

	return 0;
}

void Q_001() {
	list<string> l;
	l.push_back("유재석");
	l.push_back("박명수");
	l.push_back("정준하");
	l.push_back("노홍철");

	for (list<string>::iterator iter = l.begin(); iter != l.end(); iter++) {
		cout << *iter << endl;
	}
}

void Q_002() {
	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	while (s.size() > 0) {
		cout << s.top() << endl;
		s.pop();
	}
}

void Q_003() {
	stack<int> s;

	for (int i = 1; i <= 36; i++) {
		if (36 % i == 0) {
			s.push(i);
		}
	}

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
}

void Q_004() {
	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}

void Q_005() {
	queue<string> q;

	q.push("유재석");
	q.push("정준하");
	q.push("박명수");
	q.push("노홍철");

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}

void Q_006() {
	priority_queue<int> pq;

	pq.push(10);
	pq.push(12);
	pq.push(2);
	pq.push(1);
	pq.push(5);
	pq.push(55);
	pq.push(88);
	pq.push(70);
	pq.push(130);
	pq.push(1231);
	pq.push(221);

	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}
}