#pragma once

#include "UserFactory.h"

class UserGenerator {
    TraderFactory m_traderFactory;
    AdminFactory m_adminFactory;

public:
    UserGenerator() {};

    ~UserGenerator() {};

    User *CreateUser(UserType type, std::string name, std::string password) {
        switch (type) {
            case UserType::TraderEnum:
                return m_traderFactory.createUser(name, password);
                break;
            case UserType::AdminEnum:
                return m_adminFactory.createUser(name, password);
                break;
            default:
                return 0;
        }
    }
};
