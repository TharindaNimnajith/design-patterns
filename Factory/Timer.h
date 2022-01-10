#pragma once

#include <iostream>

class Timer {
public:
    Timer() {};

    ~Timer() {};

    virtual void SetTime(int unit) = 0;

    int timeInMicro;

    void showTime() { std::cout << "Time : " << timeInMicro << std::endl; };
};

class SecondsTimer : public Timer {
public:
    SecondsTimer() {};

    virtual ~SecondsTimer() {};

    void SetTime(int unit) override {
        timeInMicro = unit * 1000000;
    }
};

class MilliSecondTimer : public Timer {
public:
    MilliSecondTimer() {};

    virtual ~MilliSecondTimer() {};

    void SetTime(int unit) override {
        timeInMicro = unit * 1000;
    }
};
