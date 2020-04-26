#include <iostream>

#include "Graphic.h"
#include "BitmapFile.h"
#include "Timer.h"
#include "ObjectManager.h"

#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "Background.h"

int main() {
	InitTimer();
	InitGraphic(NULL, 0, 0, 350, 400);

	AddGameObject(new Background("Background", "Background", true, 0, 0));
	AddGameObject(new Player("Player", "Player", true, 143, 326, 200, 0.15f));
	AddGameObject(new Enemy("Enemy", "Enemy", true, 143, 10, 200));

	while (true) {
		Clear(0, 0, 0);

		UpdateTimer();

		UpdateObjectManager();
		DrawObjectManager();

		Render();
	}

	ExitObjectManager();
	ExitGraphic();

	return 0;
}