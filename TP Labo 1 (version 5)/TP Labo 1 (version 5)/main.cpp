#include <iostream>
#include<time.h>
#include "rlutil.h"
#include "funciones.h"

using namespace std;
int robar_1();
int robar_2();
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
    int desafio[2]= {};
    /*
    ==Cartas desafio obtenidas por cada jugador==
    desafio[0] => Jugador
    desafio[1] => CPU
    */
    // int cartas_elementos[4][2];
    /*
    ==Cartas elemento disponibles para jugar por cada jugador==
    cartas_elementos[x][0]=> jugador
    cartas_elementos[x][1]=> CPU
    */
    int elementos[3][4][5]= {};// Mazo de cartas elemtos
    int manoJugador[4]; //Cartas en juego del jugador 1
    int manoPC[4]; //cartaas en juego de la CPU
    int contRonda=0; //cantidad de rondas
    int jugar_carta; //Carta seleccionada para jugar
    int carta_jugada_Jugador, carta_jugada_PC;
    int contador_car_elementos=0; //ID cartas elementos
    bool robar = false, Game_over=false, control=false;
    //************Posicion de cartas***************
    int x=10, y=22;
    //*********************************************

    //*************Ingreso de nombre***************
    rlutil::cls();
    rlutil::locate(30,11);
    cout << "INGRESE SU NOMBRE:" << endl;
    rlutil::locate(30,13);
    cin >> nombre;
    //*********************************************


    //*******PRIMERA ETAPA -- CARTA DESAFIO--*********

    rlutil::cls();
    rlutil::locate(36,4);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(30,5);
    cout << "--------------------------" << endl;
    rlutil::locate(30,7);
    cout << nombre << " VS CPU" << endl;
    mazo_cartas(10,10,27,27);
    rlutil::locate(5,30);
    cout << "PRESIONE UNA TECLA PARA SELECCIONAR TU CARTA DESAFIO ......." << endl;
    rlutil::anykey();
    rlutil::locate(5,30);
    cout << "                                                              " << endl; //Borra el mensaje anterior


    srand (time (NULL));
    do
    {
        desafio[0]=1+rand()%(10);
        desafio[1]=1+rand()%(10);
    }
    while(desafio[0]==desafio[1]);
    carta_desafio(43,10,60,27,desafio[0]);

    rlutil::locate(2,34);
    system("pause");
    rlutil::cls();

    //********* FIN DE LA PRIMERA ETAPA************

    //**********Segunda etapa ***********

    rlutil::locate(36,4);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(30,5);
    cout << "--------------------------" << endl;
    rlutil::locate(6,7);
    cout << nombre << " VS CPU" << endl;
    rlutil::locate(4,10);
    cout << "Presione una tecla para repartir las cartas..." << endl;
    rlutil::anykey();
//*********ID cartas elementos***********
//Se le asigna un numero de identificacion a cada carta
    for (int i=0; i<3; i++)
    {
        for(int x=0; x<4; x++)
        {
            for (int j=0; j<5; j++)
            {
                contador_car_elementos++;
                elementos[i][x][j]+=contador_car_elementos;
            }
        }
    }
//***********Fin ID*****************
//***********Repartir cartas*********
    srand (time (NULL));
    do
    {
        manoJugador[0]=1+rand()%(60);
        manoJugador[1]=1+rand()%(60);
        manoJugador[2]=1+rand()%(60);

        manoPC[0]=1+rand()%(60);
        manoPC[1]=1+rand()%(60);
        manoPC[2]=1+rand()%(60);

        for(int x=0; x<3; x++)
        {
            for(int i=1; i<3; i++)
            {
                if(manoJugador[x]==manoJugador[i])
                {
                    control=true;
                }
                else
                {
                    if(manoPC[x]==manoPC[i])
                    {
                        control=true;
                    }
                    else
                    {
                        if(manoJugador[x]==manoPC[i-1])
                        {
                            control=true;
                        }
                    }
                }

            }
        }

    }
    while(!control);
//************pone en cero el mazo elementos************

    for(int p=0; p<4; p++)
    {
        for (int i=0; i<3; i++)
        {
            for(int x=0; x<4; x++)
            {
                for (int j=0; j<5; j++)
                {
                    if(manoJugador[p]==elementos[i][x][j])
                    {
                        elementos[i][x][j]=0;
                    }

                    if(manoPC[p]==elementos[i][x][j])
                    {
                        elementos[i][x][j]=0;
                    }

                }
            }
        }
    }
//*************fin poner en cero mazo elemetos*****************

//************Muestra las cartas elementos repartidas**********
    rlutil::cls();
    rlutil::locate(20,12);
    cout << "Se han repartido tres cartas para cada jugador" << endl;
    rlutil::locate(27,14);
    cout << "Tus cartas son las siguientes:" << endl;
    for (int i=0; i<4; i++)
    {
        carta_elemento(manoJugador[i], x, y);
        x+=15;
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    x=10;
    y=22;

    rlutil::locate(2,34);
    system("pause");
    rlutil::cls();

//*********Fin muestra las cartas elementos repartidas************

    do
    {

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

            cout << "OPCION? (1-3): ";
            cin >> opc;
            if( cin.fail() || cin.bad())
            {
                cin.clear();
                cin.ignore(80, '\n');
                rlutil::locate(4,16);
                cout << "\nDebe introducir un numero\n";
                system("pause");
                rlutil::cls();
            }
            else if(opc < 1 || opc > 3 )
            {
                cin.clear();
                cin.ignore(80, '\n');
                rlutil::locate(4,16);
                cout << "\nDebe introducir un numero entre 1-3\n";
                system("pause");
                rlutil::cls();
            }

        }
        while( cin.fail() || cin.bad());


        switch(opc)
        {
        case 1:
            carta_desafio(43,10,60,27,desafio[0]);
            rlutil::locate(2,34);
            system("pause");
            rlutil::cls();
            Game_over=false;

            break;
        case 2:
            for (int i=0; i<4; i++)
            {
                carta_elemento(manoJugador[i], x, y);
                x+=15;
                rlutil::setBackgroundColor(rlutil::BLACK);
            }
            x=10;
            y=22;

            rlutil::locate(2,34);
            system("pause");
            rlutil::cls();
            Game_over=false;

            break;
        case 3:
            //rlutil::anykey();
            if(robar==false)
            {
                rlutil::locate(4,32);
                cout<< "Has tomado una carta del maszo";
                do
                {
                    manoJugador[3]=1+rand()%(60);

                    manoPC[3]=1+rand()%(60);

                }
                while(manoJugador[4]==0||manoPC[4]==0||manoJugador[4]==manoPC[4]);

                for (int i=0; i<4; i++) //muestra todas las cartas, incluso la robada
                {
                    carta_elemento(manoJugador[i], x, y);
                    x+=15;
                    rlutil::setBackgroundColor(rlutil::BLACK);
                }
                x=10;
                y=22;


                rlutil::locate(2,34);
                system("pause");
                rlutil::cls();
                robar = true;
                Game_over=false;
            }
            else
            {
                if(robar==true)
                {
                    do
                    {
                        for (int i=0; i<4; i++)
                        {
                            carta_elemento(manoJugador[i], x, y);
                            x+=15;
                            rlutil::setBackgroundColor(rlutil::BLACK);
                        }
                        x=10;
                        y=22;
                        rlutil::locate(4,32);
                        cout<< "Presione el numero de la carta que desea jugar [1][2][3][4]: ";
                        cin>>jugar_carta;
                        if( cin.fail() || cin.bad())
                        {
                            cin.clear();
                            cin.ignore(80, '\n');
                            rlutil::locate(4,19);
                            cout << "\nDebe introducir un numero\n";
                            system("pause");
                            rlutil::cls();
                        }
                        else if(jugar_carta < 1 || jugar_carta > 4 )
                        {
                            cin.clear();
                            cin.ignore(80, '\n');
                            rlutil::locate(4,19);
                            cout << "\nDebe introducir un numero entre 1-4\n";
                            system("pause");
                            rlutil::cls();
                        }
                    }
                    while( cin.fail() || cin.bad());

                    x=10;
                    y=22;

                    switch(jugar_carta)
                    {
                    case 1:

                        for (int i=0; i<4; i++)
                        {
                            if(i==0)
                            {
                                y-=4;

                            }
                            else
                            {
                                if(i>0)
                                {
                                    y=22;
                                }
                            }
                            carta_elemento(manoJugador[i], x, y);
                            x+=15;
                            rlutil::setBackgroundColor(rlutil::BLACK);
                        }
                        x=10;
                        y=22;
                        carta_jugada_PC=rand()%(3);
                        manoPC[carta_jugada_PC];
                        rlutil::locate(2,34);
                        system("pause");
                        rlutil::cls();
                        robar = false;
                        Game_over=false;
                        break;
                    case 2:

                        for (int i=0; i<4; i++)
                        {
                            if(i==1)
                            {
                                y-=4;

                            }
                            else
                            {
                                if(i>1)
                                {
                                    y=22;
                                }
                            }
                            carta_elemento(manoJugador[i], x, y);
                            x+=15;
                            rlutil::setBackgroundColor(rlutil::BLACK);
                        }
                        x=10;
                        y=22;
                        carta_jugada_PC=rand()%(3);
                        manoPC[carta_jugada_PC];
                        rlutil::locate(2,34);
                        system("pause");
                        rlutil::cls();
                        robar = false;
                        Game_over=false;
                        break;
                    case 3:

                        for (int i=0; i<4; i++)
                        {
                            if(i==2)
                            {
                                y-=4;

                            }
                            else
                            {
                                if(i>2)
                                {
                                    y=22;
                                }
                            }
                            carta_elemento(manoJugador[i], x, y);
                            x+=15;
                            rlutil::setBackgroundColor(rlutil::BLACK);
                        }
                        x=10;
                        y=22;
                        carta_jugada_PC=rand()%(3);
                        manoPC[carta_jugada_PC];
                        rlutil::locate(2,34);
                        system("pause");
                        rlutil::cls();
                        robar = false;
                        Game_over=false;
                        break;
                    case 4:

                        for (int i=0; i<4; i++)
                        {
                            if(i==3)
                            {
                                y-=4;

                            }
                            carta_elemento(manoJugador[i], x, y);
                            x+=15;
                            rlutil::setBackgroundColor(rlutil::BLACK);
                        }
                        x=10;
                        y=22;
                        carta_jugada_PC=rand()%(3);
                        manoPC[carta_jugada_PC];
                        rlutil::locate(2,34);
                        system("pause");
                        rlutil::cls();
                        robar = false;
                        Game_over=false;
                        break;
                    }
                }
            }
            break;
        default:
            // rlutil::locate(4,18);
            // cout << "OPCION INCORRECTA" << endl;
            // rlutil::cls();
            break;

        }




    }
    while(Game_over==false);


}


