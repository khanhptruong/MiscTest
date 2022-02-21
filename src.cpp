#include <iostream>
#include <string>
#include <filesystem>
#include "FlagTest.h"
#include "InheritTest.h"
#include "InheritTestChild.h"
using namespace std;

void printDec(unsigned int i){
	if (i == 0){
		return;
	}
	else{
		printDec(i / 10);
		cout << i % 10 << endl;
		return;
	}
}

template <class T>
T square(T number)
{
	return number * number;
}

int main(){
	//unsigned int i = 9876;
	//printDec(i);
	FlagTest helloTest(FlagTest::hi);
	FlagTest goodbyeTest(FlagTest::bye);
	cout << "helloTest: " << helloTest.message() << "\n";
	cout << "goodbyeTest: " << goodbyeTest.message() << "\n\n";

	InheritTest parent;
	InheritTestChild child;
	cout << "Parent: " << parent.getNum() << "\n";
	cout << "Child: " << child.getNum() << "\n\n";
}