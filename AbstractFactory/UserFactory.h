#pragma once

#include <string>
#include "User.h"

enum UserType {
    TraderEnum,
    MarketMakerEnum,
    AdminEnum
};

class UserFactory {
public:
    UserFactory(void) {}

    ~UserFactory(void) {}

    virtual User *createUser(std::string username, std::string password) = 0;
};

class TraderFactory : public UserFactory {
public:
    User *createUser(std::string username, std::string password) override {
        User *user = new Trader();
        user->SetDetails(username, password);
        return user;
    };
};

class AdminFactory : public UserFactory {
public:
    User *createUser(std::string username, std::string password) override {
        User *user = new Admin();
        user->SetDetails(username, password);
        return user;
    };
};
