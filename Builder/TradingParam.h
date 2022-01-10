#pragma once

#include <iostream>

class TradingParm {
public:
    TradingParm() {};

    virtual ~TradingParm() {};

    virtual void SetInformation() = 0;

    virtual void Print() = 0;
};

class NormalTradingParm : public TradingParm {
public:
    NormalTradingParm() {};

    ~NormalTradingParm() {};

    void SetInformation() override {}

    void Print() override {
        std::cout << "NormalTradingParm" << std::endl;
    }
};

class FixTradingParm : public TradingParm {
public:
    FixTradingParm() {};

    ~FixTradingParm() {};

    void SetInformation() override {}

    void Print() override {
        std::cout << "FixTradingParm" << std::endl;
    }
};
