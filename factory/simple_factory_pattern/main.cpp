#include <iostream>
#include "header.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{

	Factory productFactory = Factory ();
	Product* productObjA = productFactory.createProduct (TypeA);
	Product* productObjB = productFactory.createProduct (TypeB);
	Product* productObjC = productFactory.createProduct (TypeC);

	if (productObjA)
		productObjA -> show ();

	if (productObjB)
		productObjB -> show ();

	if (productObjC)	
		productObjC -> show ();

	delete productObjA;
	delete productObjB;
	delete productObjC;

	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
/*
	Factory_A productFactory1 = Factory_A ();
	auto productObjA1 = productFactory1.createProduct (TypeA);
	auto productObjB1 = productFactory1.createProduct (TypeB);
	auto productObjC1 = productFactory1.createProduct (TypeC);

	if (productObjA1)
		productObjA1 -> show ();

	if (productObjB1)
		productObjB1 -> show ();

	if (productObjC1)	
		productObjC1 -> show ();
*/
	return 0;
}
