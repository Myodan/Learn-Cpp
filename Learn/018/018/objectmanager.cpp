#include "objectmanager.h"

vector<GameObject *> ObjectManager::objs;

ObjectManager::ObjectManager() {
	objs = vector<GameObject *>();
}

ObjectManager::~ObjectManager() {

}

void ObjectManager::InitObjectManager() {
	objs.clear();
}

void ObjectManager::UpdateObjectManager() {
	for (int i = 0; i < objs.size(); i++) {
		objs.at(i)->Update();
	}
}

void ObjectManager::DrawObjectManager() {
	for (int i = 0; i < objs.size(); i++) {
		objs.at(i)->Draw();
	}
}

void ObjectManager::ExitObjectManager() {
	for (int i = 0; i < objs.size(); i++) {
		delete objs.at(i);
	}
}

void ObjectManager::AddGameObject(GameObject * _obj) {
	objs.push_back(_obj);
	_obj->Start();
}

void ObjectManager::DeleteGameObject(GameObject * _obj) {
	for (int i = 0; i < objs.size(); i++) {
		if (objs.at(i) != _obj) {
			continue;
		}

		delete objs.at(i);
		objs.erase(objs.begin() + i);
		break;
	}
}