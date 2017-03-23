#include <iostream>
#include "header.h"

using std::cout;
using std::endl;

Singleton* Singleton::m_Instance = new Singleton ();
Singleton::GC Singleton::m_gc;

int main (int argc, char *argv[])
{
	Singleton *singletonObj = Singleton::getInstance ();
	cout << singletonObj->test () << endl;

	return 0;
}
