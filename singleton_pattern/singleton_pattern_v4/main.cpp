#include <iostream>
#include "header.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	Singleton *singletonObj = Singleton::getInstance ();

	cout << singletonObj->test () << endl;
	singletonObj = Singleton::getInstance ();
	cout << singletonObj->test () << endl;

	return 0;
}
