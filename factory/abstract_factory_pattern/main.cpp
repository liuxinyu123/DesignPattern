#include <iostream>
#include "header.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	Factory1 productFactory1 = Factory1 ();
	Factory2 productFactory2 = Factory2 ();

	ProductA* productObjA1 = productFactory1.createProductA ();
	ProductB* productObjB1 = productFactory1.createProductB ();

	ProductA* productObjA2 = productFactory2.createProductA ();
	ProductB* productObjB2 = productFactory2.createProductB ();

	if (productObjA1)
		productObjA1->show ();

	if (productObjB1)
		productObjB1->show ();

	if (productObjA2)
		productObjA2->show ();

	if (productObjB2)
		productObjB2->show ();

	delete productObjA1;
	delete productObjB1;
	delete productObjA2;
	delete productObjB2;

	return 0;
}
