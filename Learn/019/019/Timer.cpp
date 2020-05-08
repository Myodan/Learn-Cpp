#include "Timer.h"

float Timer::currTime;
float Timer::prevTime;
float Timer::deltaTime;

void Timer::Init() {
	currTime = GetTickCount() / 1000.0f;
	prevTime = GetTickCount() / 1000.0f;
	deltaTime = 0;
}

void Timer::Update() {
	currTime = GetTickCount() / 1000.0f;
	deltaTime = currTime - prevTime;
	prevTime = currTime;
}

float Timer::GetDeltaTime() {
	return deltaTime;
}