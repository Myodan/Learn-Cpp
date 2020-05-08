#pragma once

#include <vector>

#include "gameobject.h"

class ObjectManager {
private:
	static vector<GameObject *> objs;

public:
	ObjectManager();
	virtual ~ObjectManager();

	static void InitObjectManager();
	static void UpdateObjectManager();
	static void DrawObjectManager();
	static void ExitObjectManager();
	static void AddGameObject(GameObject * _obj);
	static void DeleteGameObject(GameObject * _obj);
};