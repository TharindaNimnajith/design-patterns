#include "MessagePrototype.h"

int main()
{
	MessagePrototype MsgProto;
	Message *testMessage = new NativeMessage();
	Message *testMessage2 = MsgProto.Clone(testMessage);
	return 0;
}
