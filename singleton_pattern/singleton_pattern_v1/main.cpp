#include <iostream>
#include "header.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	Singleton* singletonObj = Singleton::getInstance ();

	cout << singletonObj->test () << endl;

	Singleton* singletonObj1 = Singleton::getInstance ();
	cout << singletonObj1->test () << endl;
	Singleton::destroyInstance ();

	return 0;
}
