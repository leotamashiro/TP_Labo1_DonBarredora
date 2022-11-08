#include <iostream>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include "rlutil.h"
#include "Funciones.h"

using namespace std;


void delay(int secs)
{
    for (int i=(time(NULL)+secs); time(NULL)!=i; time(NULL));
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

///Pongo en 0, la poscion de la carta que sale
int sacarCartaBarajada(int cartaSacada , int vect[], int tam)
{
    for (int i=0; i<tam; i++)
    {
        if (vect[i]==cartaSacada)
        {
            vect[i]=0;
        }
    }
    return vect[tam];
}

/// Me fijo si la carta ya salio
int repartirCarta (int vect[], int tam)
{
    bool control=true;
    int carta;
    srand (time (NULL));

    while (control!=false)
    {
        carta=1+rand()%(60);
        for (int i=0; i<tam; i++)
        {
            if (vect[carta-1]!=0)
            {
                control=false;
                return carta;
            }
        }
    }
}

///Saco Carta Jugada de la Mano
int sacarCartaMano (int vect[], int tam, int indice)
{
    vect[indice]=0;
    return vect[tam];
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
    int elementos[60]= {};// Mazo de cartas elemtos
    int manoJugador[4]; //Cartas en juego del jugador 1
    int manoPC[4]; //cartaas en juego de la CPU
    int contRonda=0; //cantidad de rondas
    int jugar_carta; //Carta seleccionada para jugar
    int carta_jugada_Jugador, carta_jugada_PC;
    int indiceCartaManoPc;
    //int indiceCartaManoJugador;
    int contador_car_elementos=0; //ID cartas elementos
    bool robar = false, Game_over=false, control=false;
    int manoGanadorasJugador [60]={}; // Vector de las cartas Ganadoras del Jugador
    int manoGanadorasCPU [60]={}; // Vector de las cartas Ganadoras del CPU
    int cartaRepartida;
    int cartaGanadora;
    int contGanadasJugador=0, contGanadasCPU=0;

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
    for (int i=0; i<60; i++)
    {
        contador_car_elementos++;
        elementos[i]=contador_car_elementos;
    }
//***********Fin ID*****************
//***********Repartir cartas*********

    for (int i=0; i<3; i++)
    {
        cartaRepartida=repartirCarta(elementos, 60);
        manoJugador[i]=cartaRepartida;
        sacarCartaBarajada(cartaRepartida,elementos,60);
    }
    for (int i=0; i<3; i++)
    {
        cartaRepartida=repartirCarta(elementos, 60);
        manoPC[i]=cartaRepartida;
        sacarCartaBarajada(cartaRepartida,elementos,60);
    }

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

                cartaRepartida=repartirCarta(elementos, 60);
                sacarCartaBarajada(cartaRepartida, elementos, 60);
                manoPC[3]=cartaRepartida;
                cartaRepartida=repartirCarta(elementos, 60);
                sacarCartaBarajada(cartaRepartida, elementos, 60);
                manoJugador[3]=cartaRepartida;

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
                        indiceCartaManoPc=rand()%(3); // me elije entre 0 y 3
                        carta_jugada_PC = manoPC[indiceCartaManoPc];// 1 carta al azar de la mano PC
                        rlutil::locate(2,34);
                        carta_jugada_Jugador = manoJugador[0]; // Le asigno a Carta jugada por Jugador, el numero de carta de la Mano Jugador
                        //indiceCartaManoJugador=0;
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
                        indiceCartaManoPc=rand()%(3); // me elije entre 0 y 3
                        carta_jugada_PC = manoPC[indiceCartaManoPc];// 1 carta al azar de la mano PC
                        rlutil::locate(2,34);
                        carta_jugada_Jugador = manoJugador[1];
                        //indiceCartaManoJugador=1;
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
                        indiceCartaManoPc=rand()%(3); // me elije entre 0 y 3
                        carta_jugada_PC = manoPC[indiceCartaManoPc];// 1 carta al azar de la mano PC
                        rlutil::locate(2,34);
                        carta_jugada_Jugador = manoJugador[2];
                        //indiceCartaManoJugador=2;
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
                        indiceCartaManoPc=rand()%(3); // me elije entre 0 y 3
                        carta_jugada_PC = manoPC[indiceCartaManoPc];// 1 carta al azar de la mano PC
                        carta_jugada_Jugador = manoJugador[3];
                        //indiceCartaManoJugador=3;
                        rlutil::locate(2,34);
                        system("pause");
                        rlutil::cls();
                        robar = false;
                        Game_over=false;
                        break;
                    }

                        ///////////////////Combate//////////////////////
                        //sacarCartaMano(manoJugador, 4, indiceCartaManoJugador);
                       // sacarCartaMano(manoPC, 4, indiceCartaManoPc);

                        cout << "carta jugada por jugador es: " << carta_jugada_Jugador << endl;
                        cout << "carta jugada por pc es: " << carta_jugada_PC << endl;
                        cartaGanadora = combate_f (carta_jugada_Jugador, carta_jugada_PC);
                        cout << "carta ganadora: " << cartaGanadora << endl;

                        if (cartaGanadora == -1)
                        {
                            manoGanadorasCPU[contGanadasCPU]= carta_jugada_PC;
                            contGanadasCPU++;
                            manoGanadorasJugador[contGanadasJugador]= carta_jugada_Jugador;
                            contGanadasJugador++;
                        }

                        if (cartaGanadora==carta_jugada_Jugador)
                        {
                            manoGanadorasJugador[contGanadasJugador]= carta_jugada_Jugador;
                            contGanadasJugador++;
                            manoGanadorasJugador[contGanadasJugador]= carta_jugada_PC;
                            contGanadasJugador++;
                        }

                        if (cartaGanadora==carta_jugada_PC)
                        {
                            manoGanadorasCPU[contGanadasCPU]= carta_jugada_PC;
                            contGanadasCPU++;
                            manoGanadorasCPU[contGanadasCPU]= carta_jugada_Jugador;
                            contGanadasCPU++;
                        }
                        cout << "mano gan Jugador "<< manoGanadorasJugador[0]<<"\n";
                        cout << "mano gan PC "<< manoGanadorasCPU[0]<<"\n";

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
