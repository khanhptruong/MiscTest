#ifndef INHERIT_TEST_CHILD
#define INHERIT_TEST_CHILD

#include "InheritTest.h"

class InheritTestChild : public InheritTest
{
protected:
	virtual int num() override;

private:
	const int pNum = 999;
};

#endif