#include <Windows.h>
#include <stdio.h>

#include "Timer.h"

/////타이머 전역변수-cpp 파일에 저장함//////
float currTime;
float prevTime;
float deltaTime;

void InitTimer()
{
	currTime = GetTickCount() / 1000.0f;
	prevTime = GetTickCount() / 1000.0f;
	deltaTime = 0;
}

void UpdateTimer()
{
	currTime = GetTickCount() / 1000.0f;

	/////장면간 시간차는 현재구한 시간에서..이전장면의 시간차////
	deltaTime = currTime - prevTime;

	///printf("델타 타임 %f\n", deltaTime);

	//////현재 시간은..다음 장면의..이전시간으로..사용하기 위해서..저장함///
	prevTime = currTime;
}

float GetDeltaTime()
{
	return deltaTime;
}