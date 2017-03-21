#include <iostream>
#include "header.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	FactoryA productFactoryA = FactoryA ();
	FactoryB productFactoryB = FactoryB ();

	Product* productObjA = productFactoryA.createProduct ();
	Product* productObjB = productFactoryB.createProduct ();

	if (productObjA)
		productObjA->show ();

	if (productObjB)
		productObjB->show ();

	delete productObjA;
	delete productObjB;

		

	return 0;
}


