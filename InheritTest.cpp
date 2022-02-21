#include "InheritTest.h"

int InheritTest::getNum()
{
	return num();
}

int InheritTest::num()
{
	return pNum;
}