#include "TimerFactory.h"

int main()
{
	TimerFactory *timerFactory = new TimerFactory();

	Timer *secondTimer = 0;
	secondTimer = timerFactory->CreateTimer(TimerEnum::SecondsTimerEnum);

	Timer *milliSecondTimer = 0;
	milliSecondTimer = timerFactory->CreateTimer(TimerEnum::MilliSecondTimerEnum);

	secondTimer->SetTime(30);
	milliSecondTimer->SetTime(30);

	secondTimer->showTime();
	milliSecondTimer->showTime();

	return 0;
}
