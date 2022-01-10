#pragma once

#include <stdio.h>
#include <iostream>

class Utils
{
private:
	Utils() : m_numUses(0)
	{
	}

	static Utils *s_utilInstance;

	int m_numUses;

	~Utils()
	{
	}

public:
	static Utils *GetUtils()
	{
		if (s_utilInstance == NULL)
		{
			s_utilInstance = new Utils();
		}
		return s_utilInstance;
	}

	void UseUtils()
	{
		m_numUses++;
	}

	void printUses()
	{
		std::cout << "Usage : " << m_numUses << std::endl;
	}
};

Utils *Utils::s_utilInstance = 0;
