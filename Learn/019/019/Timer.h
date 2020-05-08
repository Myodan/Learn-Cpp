#pragma once

#include <windows.h>

class Timer {
private:
	static float currTime;
	static float prevTime;
	static float deltaTime;

public:
	static void Init();
	static void Update();
	static float GetDeltaTime();
};