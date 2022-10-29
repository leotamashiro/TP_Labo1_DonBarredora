#include <iostream>
#include "rlutil.h"

using namespace std;

int creditos()
{
    int op;
    int salir=1;
    char respuesta;
    rlutil::cls();
    rlutil::locate(10,6);
    cout<<"PUBLISHED BY: "<<endl;
    rlutil::locate(10,7);
    cout<<"Don Barredora"<<endl;
    rlutil::locate(10,9);
    cout<<"DIRECTOR#1"<<endl;
    rlutil::locate(10,10);
    cout<<"ANGEL SIMON"<<endl;
    rlutil::locate(10,12);
    cout<<"DIRECTOR #2 "<<endl;
    rlutil::locate(10,13);
    cout<<"BRIAN LARA"<<endl;
    rlutil::locate(35,6);
    cout<<"DEVELOPED BY:"<<endl;
    rlutil::locate(35,8);
    cout<<"TAMASHIRO LEONARDO"<<endl;
    rlutil::locate(35,9);
    cout<<"ARIEL."<<endl;
    rlutil::locate(35,10);
    cout<<"CLINGO FERNANDO."<<endl;
    rlutil::locate(35,11);
    cout<<"ALMIRON DAMIAN."<<endl;
    rlutil::locate(5,16);
    cout<<"-------------------------------------------------------------------------"<<endl;
    rlutil::locate(2,20);
    cout<<"TRABAJO REALIZADO POR ALUMNOS DE LA TUP, UTN FRGP, EN MODALIDAD VIRTUAL. 2022."<<endl;
    rlutil::locate(5,30);
    cout<<"PRESIONE UNA TECLA CUALQUIERA PARA VOLVER AL MENU PRINCIPAL. ";
    rlutil::locate(5,32);
    rlutil::anykey();
    rlutil::cls();
}
