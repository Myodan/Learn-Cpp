#include <iostream>

#include "graphic.h"
#include "bitmap.h"
#include "timer.h"
#include "objectmanager.h"

#include "player.h"
#include "enemy.h"
#include "bullet.h"
#include "background.h"

int main() {
	InitTimer();
	InitGraphic(NULL, 0, 100, 350, 400);

	ObjectManager::AddGameObject(new Background("Background", "Background", true, 0, 0));
	ObjectManager::AddGameObject(new Player("Player", "Player", true, 143, 326, 200, 0.15f));
	ObjectManager::AddGameObject(new Enemy("Enemy", "Enemy", true, 143, 10, 200));

	while (true) {
		Clear(0, 0, 0);

		UpdateTimer();

		ObjectManager::UpdateObjectManager();
		ObjectManager::DrawObjectManager();

		Render();
	}

	ObjectManager::ExitObjectManager();
	ExitGraphic();

	return 0;
}