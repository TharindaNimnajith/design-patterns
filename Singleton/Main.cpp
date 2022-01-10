#include "Utils.h"

int main()
{
	Utils *util1 = Utils::GetUtils();

	util1->UseUtils();
	util1->UseUtils();

	util1->printUses();

	Utils *util2 = Utils::GetUtils();
	util2->UseUtils();
	util2->UseUtils();

	util2->printUses();

	return 0;
}
