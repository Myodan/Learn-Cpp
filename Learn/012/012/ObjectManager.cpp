#include "ObjectManager.h"

GameObject * objs[1024] = { NULL, };
int objCount = 0;

void InitObjectManager() {

}

void UpdateObjectManager() {
	for (int i = 0; i < objCount; i++)
		objs[i]->Update();
}

void DrawObjectManager() {
	for (int i = 0; i < objCount; i++)
		objs[i]->Draw();
}

void ExitObjectManager() {
	for (int i = 0; i < objCount; i++)
		delete objs[i];
}

void AddGameObject(GameObject * _obj) {
	objs[objCount] = _obj;
	objs[objCount]->Start();
	objCount++;
}