#ifndef INHERIT_TEST
#define INHERIT_TEST

class InheritTest
{
public:
	int getNum();
protected:
	virtual int num();
private:
	const int pNum = 100;
};

#endif