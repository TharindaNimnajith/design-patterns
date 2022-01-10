#include <stdio.h>
#include <string>
#include <iostream>

class User {
public:
    User(void) {};

    virtual ~User(void) {};

    virtual void SetDetails(std::string username, std::string password) = 0;

    virtual void ViewDetails() = 0;

protected:
    std::string m_username;

    std::string m_password;
};

class Trader : public User {
public:
    Trader() {}

    ~Trader() {};

    void SetDetails(std::string username, std::string password) override {
        m_username = username;
        m_password = password;
    }

    void ViewDetails() override {
        std::cout << "Trader : " << m_username << "  " << m_password << std::endl;
    }
};

class Admin : public User {
public:
    Admin() {}

    ~Admin() {}

    void SetDetails(std::string username, std::string password) override {
        m_username = username;
        m_password = password;
    }

    void ViewDetails() override {
        std::cout << "Owner : " << m_username << "  " << m_password << std::endl;
    }
};
