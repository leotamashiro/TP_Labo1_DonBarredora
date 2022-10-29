#include <iostream>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include "rlutil.h"
using namespace std;

int robar_1()
{
	int C=0;
	srand (time (NULL));
	C=1+rand()%(10);
	return C;
}

int robar_2()
{
	int A=0;
	srand (time (NULL));
	A=1+rand()%(60);
	return A;
}
