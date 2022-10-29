#include <iostream>
#include "rlutil.h"
#include "funciones.h"

using namespace std;

void menu(int y)
{
    //int y;
    switch(y)
    {
    case 0://cambio color en posición jugar
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::hidecursor();
        rlutil::locate(30,8);
        cout << "CARD-JITSU++" << endl;
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,10);
        cout << "JUGAR" << endl;
        rlutil::locate(30,11);
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "ESTADISTICAS" << endl;
        rlutil::locate(30,12);
        cout << "CREDITOS" << endl;
        rlutil::locate(30,13);
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "REGLAS DEL JUEGO" << endl;
        rlutil::locate(30,15);
        cout << "SALIR" << endl;
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(28,10+y);
        cout << (char)175<<endl;
        rlutil::locate(49,10+y);
        cout << (char)174<<endl;

        break;
    case 1:
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::hidecursor();
        rlutil::locate(30,8);
        cout << "CARD-JITSU++" << endl;
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,10);
        cout << "JUGAR" << endl;
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,11);
        cout << "ESTADISTICAS" << endl;
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,12);
        cout << "CREDITOS" << endl;
        rlutil::locate(30,13);
        cout << "REGLAS DEL JUEGO" << endl;
        rlutil::locate(30,15);
        cout << "SALIR" << endl;
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(28,10+y);
        cout << (char)175<<endl;
        rlutil::locate(49,10+y);
        cout << (char)174<<endl;
        break;
    case 2:

        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::hidecursor();
        rlutil::locate(30,8);
        cout << "CARD-JITSU++" << endl;

        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,10);
        cout << "JUGAR" << endl;

        rlutil::locate(30,11);
        cout << "ESTADISTICAS" << endl;

        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,12);
        cout << "CREDITOS"<< endl;
        rlutil::locate(30,13);
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "REGLAS DEL JUEGO" << endl;
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,15);
        cout << "SALIR" << endl;
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(28,10+y);
        cout << (char)175<<endl;
        rlutil::locate(49,10+y);
        cout << (char)174<<endl;
        break;
    case 3:
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::hidecursor();
        rlutil::locate(30,8);
        cout << "CARD-JITSU++" << endl;
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,10);
        cout << "JUGAR" << endl;
        rlutil::locate(30,11);
        cout << "ESTADISTICAS" << endl;
        rlutil::locate(30,12);
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "CREDITOS" << endl;
        rlutil::locate(30,13);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "REGLAS DEL JUEGO" << endl;
        rlutil::locate(30,15);
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "SALIR" << endl;
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(28,10+y);
        cout << (char)175<<endl;
        rlutil::locate(49,10+y);
        cout << (char)174<<endl;
        break;
    case 5:
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::hidecursor();
        rlutil::locate(30,8);
        cout << "CARD-JITSU++" << endl;
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(30,10);
        cout << "JUGAR" << endl;
        rlutil::locate(30,11);
        cout << "ESTADISTICAS" << endl;
        rlutil::locate(30,12);
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "CREDITOS" << endl;
        rlutil::locate(30,13);
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "REGLAS DEL JUEGO" << endl;
        rlutil::locate(30,15);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        rlutil::setBackgroundColor(rlutil::BLACK);
        cout << "SALIR" << endl;
        rlutil::locate(28,10+y);
        cout << (char)175<<endl;
        rlutil::locate(49,10+y);
        cout << (char)174<<endl;
        break;
    default:
        break;

    }
}

int salir()
{
    int op;
    int salir=1;
    char respuesta;

    do
    {
        rlutil::cls();
        rlutil::locate(30,11);
        cout<<"Desea salir S/N: ?  ";
        rlutil::locate(30,13);
        cin>>respuesta;
        rlutil::cls();
        if(toupper(respuesta)=='S')
        {
            salir=0;
            return 0;
            rlutil::cls();
        }
        else
        {
            if(toupper(respuesta)=='N')
            {
                salir=0;
                return 1;
                rlutil::cls();
            }
            else
            {
                rlutil::cls();
                rlutil::locate(30,11);
                cout<<"Por favor ingrse S o N";
                rlutil::locate(30,13);
                cout<<"Presione una tecla para continuar";
                rlutil::anykey();
                rlutil::cls();
            }
        }


    }
    while(salir!=0);

    rlutil::cls();

}
