#pragma once

class PostTradeParam {
public:
    PostTradeParam() {};

    virtual ~PostTradeParam() {};

    virtual void SetInformation() = 0;

    virtual void Print() = 0;
};

class NormalPostTradeParam : public PostTradeParam {
public:
    NormalPostTradeParam() {};

    ~NormalPostTradeParam() {};

    void SetInformation() override {}

    void Print() override {
        std::cout << "NormalPostTradeParam" << std::endl;
    }
};

class FixPostTradeParam : public PostTradeParam {
public:
    FixPostTradeParam() {};

    ~FixPostTradeParam() {};

    void SetInformation() override {}

    void Print() override {
        std::cout << "FixPostTradeParam" << std::endl;
    }
};
