#include "Message.h"

class MessagePrototype
{
public:
	MessagePrototype()
	{
	}

	Message *Clone(Message *message)
	{
		return message->Clone();
	}

	~MessagePrototype()
	{
	}
};
