#include <iostream>

#include "Graphic.h"
#include "BitmapFile.h"
#include "Timer.h"
#include "Player.h"
#include "Background.h"

int main() {
	InitTimer();
	InitGraphic(NULL, 0, 0, 350, 400);

	GameObject * objs[] = {
		new Background("Background", "Background", true, 0, 0),
		new Player("Player", "Player", true, 143, 326, 200)
	};

	/* Start */
	for (int i = 0; i < sizeof (objs) / sizeof(GameObject *); i++) {
		objs[i]->Start();
	}

	while (true) {
		/* Init */
		UpdateTimer();
		Clear(0, 0, 0);

		/* Update */
		for (int i = 0; i < sizeof(objs) / sizeof(GameObject *); i++) {
			objs[i]->Update();
		}

		/* Draw */
		for (int i = 0; i < sizeof(objs) / sizeof(GameObject *); i++) {
			objs[i]->Draw();
		}

		/* Render */
		Render();
	}

	return 0;
}