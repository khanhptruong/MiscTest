#include "FlagTest.h"

FlagTest::FlagTest(FlagTest::messageFlag mF)
{
	pMsgFlg = mF;
}

std::string FlagTest::message()
{
	if (pMsgFlg == FlagTest::hi)
	{
		return "Hello World";
	}
	else if (pMsgFlg == FlagTest::bye)
	{
		return "Goodbye World";
	}
}