#pragma once

#include "UserFactory.h"

class UserGenerator
{
	TraderFactory m_traderFactory;
	AdminFactory m_adminFactory;

public:
	UserGenerator(){};

	~UserGenerator(){};

	User *CreateUser(UserType type, string name, string passwrd)
	{
		switch (type)
		{
		case UserType::TraderEnum:
			return m_traderFactory.createUser(name, passwrd);
			break;
		case UserType::AdminEnum:
			return m_adminFactory.createUser(name, passwrd);
			break;
		default:
			return 0;
		};
	}
};
