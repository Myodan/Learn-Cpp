#include <iostream>

#include "Player.h"
#include "WhiteMage.h"
#include "BlackMage.h"

using namespace std;

int main() {
	GameObject * gameObjects[] = {
		new Player("플레이어", "홍길동", 2000),
		new WhiteMage("플레이어", "마법사1", 100.0f, 80.0f),
		new BlackMage("플레이어", "마법사2", 95.0f, "변신"),
	};

	for (int i = 0; i < sizeof(gameObjects) / sizeof(GameObject *); i++) {
		gameObjects[i]->print(); cout << endl;
	}

	for (int i = 0; i < sizeof(gameObjects) / sizeof(GameObject *); i++) {
		delete gameObjects[i];
	}

	return 0;
}