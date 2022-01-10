#pragma once

#include "Timer.h"

enum TimerEnum {
    SecondsTimerEnum,
    MilliSecondTimerEnum,
    MicroSecondTimerEnum
};

class TimerFactory {
public:
    TimerFactory() {};

    ~TimerFactory() {};

    Timer *CreateTimer(TimerEnum type) {
        switch (type) {
            case TimerEnum::SecondsTimerEnum:
                return new SecondsTimer();
            case TimerEnum::MilliSecondTimerEnum:
                return new MilliSecondTimer();
            default:
                return 0;
        }
    }
};
