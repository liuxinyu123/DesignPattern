#include <iostream>
#include "header.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	FatManBuilder *FatManBuilderObj = new FatManBuilder ();
	Director directorObj (FatManBuilderObj);
	directorObj.createMan ();
	Man* fatMan = FatManBuilderObj->getMan ();

	if (fatMan)
		fatMan->showMan ();

	return 0;
}
