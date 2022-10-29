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


bool verfNum(int num, int vec[], int tam){
    for(int i=0;i<=tam;i++){
        if(num == vec[i]){
            return true;
        }
    }

    return false;
}

//ARMADO DE MAZO
int armarMazo()
{
    int vecMazo[60] = {}; //ver si es 60 o 59
    int i, num;
    int existe;
    srand(time(NULL));

    for(i=0;i<=60;i++){
        num = 1+rand()%(61-1);
        existe=verfNum(num,vecMazo,60);
        if(existe == false){
            vecMazo[i]= num;
        }
        /*else{
            i--;
        }*/

    }
    return vecMazo[60];
}

////
int repartir(int vecBaraja[], int tam)
{
    int aux,i;
    for (i=0; i<tam; i++)
    {
        if (vecBaraja[i]!=0)
        {
            aux=vecBaraja[i];
            vecBaraja[i]=0;
            return aux;
        }

    }
}

int repartirJugador (int vec[], int tam, int vecJugador[], int tam2)
{
    int carta,i;
    for (i=0; i<3; i++)
    {
        carta=repartir(vec, 60);
        if (vecJugador[i]!=0)
        {
            vecJugador[i]=carta;
        }
    }
    return vecJugador[30];
}

void mostrarMano(int vecJugador[], int tam)
{
    cout << "vamos a mostrar las 1ras 3 cartas" << endl;
    for (int i=0; i<tam ; i++)
    {
        if (vecJugador[i]!=0)
        {
            cout << vecJugador[i] << " ";
        }
        else
        {
            cout << "no hay nada";
        }
    }
}
