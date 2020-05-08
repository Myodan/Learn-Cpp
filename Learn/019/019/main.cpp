#include <iostream>

#include "graphic.h"
#include "bitmap.h"
#include "Timer.h"
#include "ObjectManager.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "Background.h"

int main() {
	Timer::Init();
	InitGraphic(NULL, 0, 0, 350, 400);

	ObjectManager::Add(new Background("Background", "Background", true, 0, 0));
	ObjectManager::Add(new Player("Player", "Player", true, 143, 326, 200, 0.15f));
	ObjectManager::Add(new Enemy("Enemy", "Enemy", true, 143, 10, 200));

	while (true) {
		Clear(0, 0, 0);

		Timer::Update();
		ObjectManager::Update();
		ObjectManager::Draw();

		Render();
	}

	ExitGraphic();

	return 0;
}