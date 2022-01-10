#pragma once

#include "InstrumentBuilder.h"

class InstrumentCreator
{
	InstrumentBuilder *m_builder;

public:
	InstrumentCreator(InstrumentBuilder *builder)
	{
		m_builder = builder;
	}

	Instrument *GetInstrument()
	{
		if (m_builder)
		{
			m_builder->CreateTradingParam();
			m_builder->CreatePostTradeParam();
			return m_builder->GetInstrument();
		}
		else
		{
			std::cout << "Creator error" << std::endl;
			return 0;
		}
	}
};
