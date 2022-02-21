#ifndef FLAG_TEST
#define FLAG_TEST

#include <string>

class FlagTest
{
public:
	static enum messageFlag { hi, bye };

	FlagTest(messageFlag mF);

	std::string message();

private:
	messageFlag pMsgFlg;
};

#endif