#include <iostream>
#include<time.h>
#include "rlutil.h"
#include "funciones.h"



using namespace std;

void menu(int y);
void selector(int y);
int jugar();

int main()
{
    int y=0;
    selector(y);
    return 0;
}


void selector(int y)
{
    int op=1;
    //captura las teclas para el cursor en menu
    do
    {
        menu(y);
        switch(rlutil::getkey())
        {
        case 14: //UP
            rlutil::locate(28,10+y);
            cout<< " " <<endl;
            rlutil::locate(49,10+y);
            cout<< " " <<endl;
            if(y==5)
            {
                y=3;
                rlutil::locate(28,10+y);
                cout<< " " <<endl;
                rlutil::locate(49,10+y);
                cout<< " " <<endl;
                cout <<y;
            }
            else
            {
                y--;
            }
            //y--;

            if(y<0)
            {
                y=0;
            }
            break;
        case 15: //down
            rlutil::locate(28,10+y);
            cout<< " " <<endl;
            rlutil::locate(49,10+y);
            cout<< " " <<endl;
            if(y==3)
            {
                y=5;
                rlutil::locate(28,10+y);
                cout<< " " <<endl;
                rlutil::locate(49,10+y);
                cout<< " " <<endl;

            }
            else
            {
                y++;
            }
            //y++;
            if(y>5)
            {
                y=5;
            }
            break;

        case 1: //enter
            switch(y)
            {
            case 0:
                rlutil::setColor(rlutil::WHITE);
                rlutil::setBackgroundColor(rlutil::BLACK);
                op=jugar();

                break;
            case 1:
                rlutil::setColor(rlutil::WHITE);
                rlutil::setBackgroundColor(rlutil::BLACK);

                break;
            case 2:
                rlutil::setColor(rlutil::WHITE);
                rlutil::setBackgroundColor(rlutil::BLACK);
                op=creditos();
                ///creditos();
                break;
            case 3:
                rlutil::setColor(rlutil::WHITE);
                rlutil::setBackgroundColor(rlutil::BLACK);
                op=reglasJuego();
                ///reglas del juego();
                break;
            case 5: //Salir
                rlutil::setColor(rlutil::WHITE);
                rlutil::setBackgroundColor(rlutil::BLACK);
                op=salir();
            }
            break;
        default:
            break;
        }
    }
    while(op!=0);
}


int jugar()
{
    int opc;
    char nombre[60]; //Nombre del jugador
    int desafio[2]={};
    /*
    desafio[0] => Jugador
    desafio[1] => CPU
    */
    int manoJugador[4];
    int manoPC[4];
    int contRonda;
    int jugarSi;
    bool robar = false;

    rlutil::cls();

    rlutil::locate(30,11);
    cout << "INGRESE SU NOMBRE:" << endl;
    rlutil::locate(30,13);
    cin >> nombre;
    contRonda = 0;
    jugarSi=0;

    //*******PRIMERA ETAPA -- CARTA DESAFIO--*********

    rlutil::cls();
    rlutil::locate(30,4);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(30,5);
    cout << "--------------------------" << endl;
    rlutil::locate(30,7);
    cout << nombre << " VS CPU" << endl;
    mazo_cartas(10,10,27,27);
    rlutil::locate(5,30);
    cout << "PRESIONE UNA TECLA PARA SELECCIONAR TU CARTA DESAFIO ......." << endl;
    rlutil::anykey();
    desafio[0]=robar_1();
    carta_desafio(43,10,60,27,desafio[0]);
    desafio[1]=robar_1();


    int valor=0;


    rlutil::locate(62,10);
    cout<< "J1 "<< desafio[0];//Esto hay que borrarlo. Es para corroborar que carta le tocó al jugador y que carta le tocó a la PC

    rlutil::locate(62,12);
    cout<< "PC "<< desafio[1];//Esto hay que borrarlo. Es para corroborar que carta le tocó al jugador y que carta le tocó a la PC


    rlutil::locate(2,32);
    system("pause");
    rlutil::cls();

    //********* FIN DE LA PRIMERA ETAPA***********

    do
    {
        rlutil::locate(36,4);
        cout << "CARD-JITSU++" << endl;
        rlutil::locate(30,5);
        cout << "--------------------------" << endl;
        rlutil::locate(6,7);
        cout << nombre << " VS CPU" << endl;
        rlutil::locate(60,7);
        cout << "RONDA #: " << contRonda + 1 << endl;

        rlutil::locate(4,10);
        cout << "[1] - VER CARTA DESAFIO" << endl;
        rlutil::locate(4,12);
        cout << "[2] - VER CARTAS ELEMENTOS" << endl;
        if(robar == false)
        {
            rlutil::locate(4,14);
            cout << "[3] - ROBAR CARTA ELEMENTO DE LA PILA" << endl;
        }
        if(robar == true)
        {
            rlutil::locate(4,14);
            cout << "[3] - JUGAR UNA CARTA" << endl;
        }
        rlutil::locate(4,16);
        cout << "OPCION? (1-3)" << endl;
        rlutil::locate(4,18);
        cin >> opc;
        //rlutil::cls();
        switch(opc)
        {
        case 1:
            carta_desafio(43,10,60,27,desafio[0]);
            rlutil::locate(2,32);
            system("pause");
            rlutil::cls();
        // aca iria un switch y dependiendo que numero es te muestre la leyendo de lo que tenes que hacer o te muestre en forma de carta
        /*switch(desafio[0])
        {
        case 1:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR UNA CARTA DE NIEVE" << endl;
            rlutil::locate(2,32);
            system("pause");
            rlutil::cls();
            break;
        case 2:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR UNA CARTA DE FUEGO" << endl;
            rlutil::locate(2,32);
            system("pause");
            rlutil::cls();
            break;
        case 3:

           rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR UNA CARTA DE AGUA" << endl;
             rlutil::locate(2,32);
            system("pause");
            rlutil::cls();
            break;
        case 4:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR DOS CARTAS ROJAS" << endl;
            rlutil::locate(2,32);
            system("pause");
            rlutil::cls();
            break;
        case 5:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR DOS CARTAS AMARILLAS" << endl;
             rlutil::locate(2,32);
            system("pause");
            rlutil::cls();
            break;
        case 6:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR DOS CARTAS VERDES" << endl;
            system("pause");
            rlutil::cls();
            break;
        case 7:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR DOS CARTAS AZULES" << endl;
            system("pause");
            rlutil::cls();
            break;
        case 8:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR UNA CARTA CON EL MISMO ELEMENTO QUE EL ADVERSARIO" << endl;
            system("pause");
            rlutil::cls();
            break;
        case 9:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR DOS CARTAS CON EL MISMO NUMERO" << endl;
            system("pause");
            rlutil::cls();
            break;
        case 10:

            rlutil::locate(30,12);
            cout << "TU CARTA DESAFIO ES:" << endl;
            rlutil::locate(30,13);
            cout << "--------------------" << endl;
            rlutil::locate(30,14);
            cout << "GANAR DOS RONDAS DE MANERA CONSECUTIVA" << endl;
            system("pause");
            rlutil::cls();
            break;
        }
        break;*/
        case 2:
            //aca se muestran las cartas que tiene en la mano (son 3 + la que se roba)
            break;
        case 3:
            robar = true;
            //aca se tiene que guardar la carta robada
            //aca que hacer un if o una funcion para diferenciar la parte de robar de la de jugar
            break;
        default:
            cout << "OPCION INCORRECTA" << endl;
            break;

        }

    }
    while(contRonda!=15); //ver si es asi


}
