#include <iostream>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include "rlutil.h"
using namespace std;

/*void cartas_repartidas(int vec1[][2])
{
	int vec_a[][][5], vec_b[][2];
	for (int i=0; i<3; i++)
        for(int x=0; x<4; x++)
            for (int j=0; j<5; j++)
            {
                if(vec_b[][2]==vec_a[i][x][j])
                {
                    vec_a[i][x][j]=0;
                }
            }

}*/

void delay(int secs)
{
    for (int i=(time(NULL)+secs); time(NULL)!=i; time(NULL));
}
