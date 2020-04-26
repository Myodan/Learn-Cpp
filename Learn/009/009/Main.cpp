#include <iostream>

#include "Player.h"
#include "WhiteMage.h"
#include "BlackMage.h"

using namespace std;

int main() {
	GameObject * gameObjects[] = {
		new Player("�÷��̾�", "ȫ�浿", 2000),
		new WhiteMage("�÷��̾�", "������1", 100.0f, 80.0f),
		new BlackMage("�÷��̾�", "������2", 95.0f, "����"),
	};

	for (int i = 0; i < sizeof(gameObjects) / sizeof(GameObject *); i++) {
		gameObjects[i]->print(); cout << endl;
	}

	for (int i = 0; i < sizeof(gameObjects) / sizeof(GameObject *); i++) {
		delete gameObjects[i];
	}

	return 0;
}