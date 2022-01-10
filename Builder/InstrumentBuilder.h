#pragma once

#include "TradingParam.h"
#include "PostTradeParam.h"
#include "Instrument.h"

class InstrumentBuilder {
public:
    InstrumentBuilder() {};

    virtual ~InstrumentBuilder() {};

    virtual void CreateTradingParam() = 0;

    virtual void CreatePostTradeParam() = 0;

    Instrument *GetInstrument() {
        return m_instrument;
    }

protected:
    Instrument *m_instrument;
};

class FixedIncomeBuilder : public InstrumentBuilder {
public:
    FixedIncomeBuilder() {
        m_instrument = new FixIncomeInstrument();
    };

    ~FixedIncomeBuilder() {};

    void CreateTradingParam() override {
        m_instrument->SetTradingParameter(new FixTradingParm());
    }

    void CreatePostTradeParam() override {
        m_instrument->SetPostTradeParam(new FixPostTradeParam());
    }
};

class EquityBuilder : public InstrumentBuilder {
public:
    EquityBuilder() {
        m_instrument = new EquityInstrument();
    };

    ~EquityBuilder() {};

    void CreateTradingParam() override {
        m_instrument->SetTradingParameter(new NormalTradingParm());
    }

    void CreatePostTradeParam() override {
        m_instrument->SetPostTradeParam(new NormalPostTradeParam());
    }
};
