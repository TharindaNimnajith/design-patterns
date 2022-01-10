#pragma once

#include <iostream>

class TradingParm;

class PostTradeParam;

class Instrument {
public:
    Instrument() {};

    virtual ~Instrument() {};

    virtual void SetInsDetails() = 0;

    virtual void SetTradingParameter(TradingParm *tparam) = 0;

    virtual void SetPostTradeParam(PostTradeParam *ptparam) = 0;

    void Print() {
        std::cout << "Instrument Details" << std::endl;
        m_tradingParam->Print();
        m_postTradeParam->Print();
    };

protected:
    TradingParm *m_tradingParam;

    PostTradeParam *m_postTradeParam;
};

class EquityInstrument : public Instrument {
public:
    EquityInstrument() {};

    ~EquityInstrument() {};

    void SetInsDetails() override {}

    void SetTradingParameter(TradingParm *tparam) override {
        m_tradingParam = tparam;
    }

    void SetPostTradeParam(PostTradeParam *ptparam) override {
        m_postTradeParam = ptparam;
    }
};

class FixIncomeInstrument : public Instrument {
public:
    FixIncomeInstrument() {};

    ~FixIncomeInstrument() {};

    void SetInsDetails() override {}

    void SetTradingParameter(TradingParm *tparam) override {
        m_tradingParam = tparam;
    }

    void SetPostTradeParam(PostTradeParam *ptparam) override {
        m_postTradeParam = ptparam;
    }
};
