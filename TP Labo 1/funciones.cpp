#include <iostream>
#include "rlutil.h"
using namespace std;

//Dibujar Carta
void dibujarCard(int ancho, int alto){
     for (int x=1; x<=11;x++)
    {
        for (int y=1; y<=8; y++)
        {
            rlutil::locate (x,y);
            rlutil::setBackgroundColor(15);
            cout << " ";
        }
    }
    rlutil::setBackgroundColor(0);
}
