#include "InstrumentCreator.h"
#include "InstrumentBuilder.h"

int main()
{
	InstrumentBuilder *builder = new EquityBuilder();
	InstrumentCreator *creator = new InstrumentCreator(builder);
	Instrument *ins = creator->GetInstrument();

	if (ins)
	{
		ins->Print();
	}
	else
	{
		std::cout << "error" << std::endl;
	}

	return 0;
}
