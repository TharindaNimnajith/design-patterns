class Message
{
public:
	Message(){};

	virtual ~Message(){};

	virtual Message *Clone() = 0;
};

class FixMessage : public Message
{
public:
	FixMessage(){};

	~FixMessage(){};

	Message *Clone() override
	{
		return new FixMessage();
	}
};

class NativeMessage : public Message
{
public:
	NativeMessage(){};

	~NativeMessage(){};

	Message *Clone() override
	{
		return new NativeMessage();
	}
};
