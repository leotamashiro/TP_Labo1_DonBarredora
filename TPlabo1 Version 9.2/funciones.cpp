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
    do
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
    }while (control!=false);


    /*while (control!=false)
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
    }*/
}

///Saco Carta Jugada de la Mano
int sacarCartaMano (int vect[], int tam, int indice)
{
    vect[indice]=0;
    return vect[tam];
}

bool validarSeleccion (int num, int vect[], int tam)
{
    if (vect[num]!=0)
    {
        return true;
    }
    return false;
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

    int elementos[60]= {};// Mazo de cartas elemtos
    int manoJugador[60]={}; //Cartas en juego del jugador 1
    int manoPC[60]={}; //cartaas en juego de la CPU
    int contRonda=0; //cantidad de rondas
    int jugar_carta; //Carta seleccionada para jugar
    int carta_jugada_Jugador, carta_jugada_PC;
    int indiceCartaManoPc=99;
    int indiceCartaManoJugador=98;
    int contador_car_elementos=0; //ID cartas elementos
    bool robar = false, control=false;
    int cartaRepartida;
    int cartaGanadora;
    int contGanadasJugador=3, contGanadasCPU=3;
    int contJ1=0;
    bool winner = false;  // winner = true gano jugador
    int color, tipo;
    //CUMPLIR DESAFIOS
    int contRoja=0, contAmarilla=0, contVerde=0, contAzul=0;
    bool mismoNumero=false, dosRondas=false, mismoElemento=false;
    int contRojaCPU=0, contAmarillaCPU=0, contVerdeCPU=0, contAzulCPU=0;
    bool mismoNumeroCPU=false, dosRondasCPU=false, mismoElementoCPU=false;
    bool rondaConsecutivaJugador=false, rondaConsecutivaCPU=false;
    bool primeraRondaCPU=true, primeraRondaJugador=true;
    bool combGanadoraUno=false, combGanadoraDos=false;
    bool Game_over_Jugador=false, Game_over_PC=false;
    bool desafioOverJugador = false, desafioOverPC = false;
    int dos_iguales_jugador[5] = {}, dos_iguales_cpu[5] = {};
    //bool Game_over=false;
    int queElementoCPU, queElementoJugador;
    int rondaGanadaJugador=0, rondaGanadaElemtoJugador=0;
    int rondaGanadaCPU=0, rondaGanadaElementoCPU=0;
    int ptoTotalJugador=0, ptoTotalCPU=0, ptoCombGanadoraJugador=0, ptoCombGanadoraCPU=0, ptoDesafioJugador=0, ptoDesafioCPU=0;
    bool ganoJugador=false, ganoCPU=false; // variables que cree para probar
    bool flagWINNER=false;


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


    //Reparte carta desafios
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
    for (int a=0; a<3; a++) //Reparte la Mano al Jugador
    {
        cartaRepartida=repartirCarta(elementos, 60);
        manoJugador[a]=cartaRepartida;
        sacarCartaBarajada(cartaRepartida,elementos,60);
    }
    for (int l=0; l<3; l++)//Reparte la mano a la PC
    {
        cartaRepartida=repartirCarta(elementos, 60);
        manoPC[l]=cartaRepartida;
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
            //Game_over=false;

            break;
        case 2:
            for (int i=0; i<contGanadasJugador+1; i++)
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
            //Game_over=false;

            break;
        case 3:
            //rlutil::anykey();
            if(robar==false)
            {
                rlutil::locate(4,32);
                cout<< "Has tomado una carta del maszo";
                ///roba del maso
                cartaRepartida=repartirCarta(elementos, 60);
                sacarCartaBarajada(cartaRepartida, elementos, 60);
                if(primeraRondaCPU==true) // Primera Ronda CPU
                {
                    manoPC[3]=cartaRepartida;
                    primeraRondaCPU=false;
                }
                if(primeraRondaCPU==false) //Segunda Ronda de CPU
                {
                    manoPC[indiceCartaManoPc]=cartaRepartida;
                }

                cartaRepartida=repartirCarta(elementos, 60);
                sacarCartaBarajada(cartaRepartida, elementos, 60);
                if (primeraRondaJugador==true)//Primera ronda Jugador
                {
                    manoJugador[3]=cartaRepartida;
                    primeraRondaJugador=false;
                }
                if(primeraRondaJugador==false)//Segunda Ronda Jugador
                {
                    manoJugador[indiceCartaManoJugador]=cartaRepartida;
                }

                for (int i=0; i<contGanadasJugador+1; i++) //muestra todas las cartas, incluso la robada
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
                //Game_over=false;
            }
            else
            {
                if(robar==true)
                {
                    bool existe=false;
                    do
                    {
                        for (int i=0; i<contGanadasJugador+1; i++)
                        {
                            carta_elemento(manoJugador[i], x, y);
                            x+=15;
                            rlutil::setBackgroundColor(rlutil::BLACK);
                        }
                        x=10;
                        y=22;
                        rlutil::locate(4,32);
                        cout<< "Presione el numero de la carta que desea jugar: ";
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
                        /*else if(jugar_carta < 1 || jugar_carta > 4 )
                        {
                            cin.clear();
                            cin.ignore(80, '\n');
                            rlutil::locate(4,19);
                            cout << "\nDebe introducir un numero entre 1-4\n";
                            system("pause");
                            rlutil::cls();
                        }*/
                        // valido si el numero de carta que elije jugar esta en el maso de jugador
                        existe=validarSeleccion((jugar_carta-1), manoJugador, 60);
                    }
                    while( cin.fail() || cin.bad()||(existe==false)||(jugar_carta==0));

                    x=10;
                    y=22;

                    indiceCartaManoJugador=jugar_carta-1;//me guardo el indice de la carta que estoy jugando
                    indiceCartaManoPc=rand()%(3); // me elije entre 0 y 3
                    carta_jugada_PC = manoPC[indiceCartaManoPc];// 1 carta al azar de la mano PC
                    sacarCartaMano(manoPC, 60, indiceCartaManoPc);
                    carta_jugada_Jugador=manoJugador[indiceCartaManoJugador];// Le asigno a Carta jugada por Jugador, el numero de carta de la Mano Jugador
                    sacarCartaMano(manoJugador, 60 ,indiceCartaManoJugador);
                    queElementoCPU=elementoCarta(carta_jugada_PC);
                    queElementoJugador=elementoCarta(carta_jugada_Jugador);
                    rlutil::locate(2,34);
                    system("pause");
                    rlutil::cls();
                    robar = false;
                    //Game_over=false;


                        ///////////////////Combate//////////////////////

                        cout << "carta jugada por jugador es: " << carta_jugada_Jugador << endl;
                        cout << "carta jugada por pc es: " << carta_jugada_PC << endl;
                        cartaGanadora = combate_f (carta_jugada_Jugador, carta_jugada_PC);
                        cout << "carta ganadora: " << cartaGanadora << endl;

                        ///Empate
                        if (cartaGanadora == -1)
                        {
                            contGanadasCPU++;
                            manoPC[contGanadasCPU]= carta_jugada_PC;
                            contGanadasJugador++;
                            manoJugador[contGanadasJugador]= carta_jugada_Jugador;
                            rondaConsecutivaJugador=false;
                            rondaConsecutivaCPU=false;
                        }

                        ///Gana Jugador
                        if (cartaGanadora==carta_jugada_Jugador)
                        {
                            contGanadasJugador++; // ultimo lugar diponible para guardar una carta ganda +1
                            manoJugador[contGanadasJugador]= carta_jugada_Jugador; // me guarda en el ultimo lugar dispoble la carta que gana
                            contGanadasJugador++;
                            manoJugador[contGanadasJugador]= carta_jugada_PC;// me guarda en el ultimo lugar dispoble la carta que gana

                            //Sumo Puntajes
                            mismoElemento = combateMismoElemento (carta_jugada_Jugador, carta_jugada_PC); // si ya gano el jugador, pregunta si gano una carta del mismo elemto para ver el punta
                            if (mismoElemento==true)
                            {
                                rondaGanadaElemtoJugador++;
                            }
                            else
                            {
                                rondaGanadaJugador++;
                            }

                            color = devuelveColor(carta_jugada_Jugador);
                            if(color == 1){//si la carta ganada es Roja
                                contRoja++;
                            }
                            if(color == 2){//si la carta ganada es amarilla
                                contAmarilla++;
                            }
                            if(color == 3){//si la carta ganada es verde
                                contVerde++;
                            }
                            if(color == 4){//si la carta ganada es azul
                                contAzul++;
                            }
                            color = devuelveColor(carta_jugada_PC);
                            if(color == 1){//si la carta ganada es Roja
                                contRoja++;
                            }
                            if(color == 2){//si la carta ganada es amarilla
                                contAmarilla++;
                            }
                            if(color == 3){//si la carta ganada es verde
                                contVerde++;
                            }
                            if(color == 4){//si la carta ganada es azul
                                contAzul++;
                            }


                            switch(desafio[0]){
                            case 1://Nieve
                                if ((queElementoCPU==2)||(queElementoJugador==2)){
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }

                                break;
                            case 2://Fuego
                                if ((queElementoCPU==1)||(queElementoJugador==1)){
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }
                                break;
                            case 3://Agua
                                if ((queElementoCPU==3)||(queElementoJugador==3)){
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }
                                break;
                            case 4:
                                if(contRoja >= 2){
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }
                                break;
                            case 5:
                                if(contAmarilla >= 2){
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }
                                break;
                            case 6:
                                if(contVerde >= 2){
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }
                                break;
                            case 7:
                                if(contAzul >= 2){
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }
                                break;
                            case 8:
                                mismoElemento = combateMismoElemento (carta_jugada_Jugador, carta_jugada_PC);
                                if(mismoElemento == true){ //ganar una cartas
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }
                                break;
                            case 9:
                                mismoNumero = dosCartasMismoNumero(carta_jugada_Jugador, dos_iguales_jugador);
                                if(mismoNumero == true){ //ganar dos cartas
                                    desafioOverJugador=true;
                                    cout << "Jugador cumple desafio";
                                }
                                break;
                            case 10:
                                if(rondaConsecutivaJugador == true){ //dos rondas consecutivas
                                   desafioOverJugador=true;
                                   cout << "Jugador cumple desafio";
                                }
                                break;
                                }

                            rondaConsecutivaJugador=true;
                            rondaConsecutivaCPU=false;
                            winner = true; // para ver quien gano

                        }

                        ///Gana CPU
                        if (cartaGanadora==carta_jugada_PC)
                        {
                            contGanadasCPU++;
                            manoPC[contGanadasCPU]= carta_jugada_PC;
                            contGanadasCPU++;
                            manoPC[contGanadasCPU]= carta_jugada_Jugador;

                            //Sumo Puntajes
                            mismoElemento = combateMismoElemento (carta_jugada_Jugador, carta_jugada_PC);
                            if (mismoElemento==true)
                            {
                                rondaGanadaElementoCPU++;
                            }
                            else
                            {
                                rondaGanadaCPU++;
                            }

                            color = devuelveColor(carta_jugada_Jugador);
                            if(color == 1){//si la carta ganada es Roja
                                contRoja++;
                            }
                            if(color == 2){//si la carta ganada es amarilla
                                contAmarilla++;
                            }
                            if(color == 3){//si la carta ganada es verde
                                contVerde++;
                            }
                            if(color == 4){//si la carta ganada es azul
                                contAzul++;
                            }
                            color = devuelveColor(carta_jugada_PC);
                            if(color == 1){//si la carta ganada es Roja
                                contRoja++;
                            }
                            if(color == 2){//si la carta ganada es amarilla
                                contAmarilla++;
                            }
                            if(color == 3){//si la carta ganada es verde
                                contVerde++;
                            }
                            if(color == 4){//si la carta ganada es azul
                                contAzul++;
                            }

                            switch(desafio[1]){
                            case 1://Nieve
                                if ((queElementoCPU==2)||(queElementoJugador==2)){
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }

                                break;
                            case 2://Fuego
                                if ((queElementoCPU==1)||(queElementoJugador==1)){
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }
                                break;
                            case 3://Agua
                                if ((queElementoCPU==3)||(queElementoJugador==3)){
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }
                                break;
                            case 4:
                                if(contRojaCPU >= 2){
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }
                                break;
                            case 5:
                                if(contAmarillaCPU >= 2){
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }
                                break;
                            case 6:
                                if(contVerdeCPU >= 2){
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }
                                break;
                            case 7:
                                if(contAzulCPU >= 2){
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }
                                break;
                            case 8:
                                mismoElemento = combateMismoElemento (carta_jugada_Jugador, carta_jugada_PC);
                                if(mismoElementoCPU == true){ //ganar una cartas
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }
                                break;
                            case 9:
                                mismoNumero=dosCartasMismoNumero(carta_jugada_PC, dos_iguales_cpu);
                                if(mismoNumeroCPU == true){ //ganar dos cartas
                                    desafioOverPC=true;
                                    cout << "CPU cumple desafio";
                                }
                                break;
                            case 10:
                                if(rondaConsecutivaCPU == true){ //dos rondas consecutivas
                                   desafioOverPC=true;
                                   cout << "CPU cumple desafio";
                                }
                                break;
                                }

                            rondaConsecutivaCPU=true;
                            rondaConsecutivaJugador=false;
                            winner = false;
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
        cout << "flag desafio jugador " << desafioOverJugador;
        cout << "  flag desafio CPU" << desafioOverPC << "\n";
        combGanadoraUno=combinacionGanadora1(manoJugador, contGanadasJugador);
        combGanadoraDos=combinacionGanadora2(manoJugador, contGanadasJugador);
        if ((combGanadoraUno==true) || (combGanadoraDos==true)) // se cuple comb ganadador para jugador?
        {
            Game_over_Jugador==true;
            cout << "Jugador cumple combinacion ganadora";
        }

        combGanadoraUno=combinacionGanadora1(manoPC, contGanadasCPU);
        combGanadoraDos=combinacionGanadora2(manoJugador, contGanadasCPU);
        if ((combGanadoraUno==true) || (combGanadoraDos==true))// se cuple comb ganadador para CPU?
        {
            Game_over_PC==true;
            cout << "CPU cumple combinacion ganadora";
        }

        /// if de prueba
        if (Game_over_Jugador==true)
        {
            if (desafioOverJugador==true)
            {
                ganoJugador=true;
                cout << "\n" <<"entra a gano jugador";
            }
        }

        if (Game_over_PC==true)
        {
            if (desafioOverPC==true)
            {
                ganoCPU==true;
                cout << "\n" << "entra a gano CPU";
            }
        }
        if ((ganoCPU==false || ganoJugador==false))
        {
            flagWINNER=false;
        }
        else
        {
            flagWINNER=true;
        }

    }
    while(flagWINNER=false);

    rondaGanadaElemtoJugador = rondaGanadaElemtoJugador*5;//ptos de rondaGanadaElemtoJugador se muestra en Jugador
    rondaGanadaElementoCPU = rondaGanadaElementoCPU*5;

    if (Game_over_Jugador==true)
    {
         ptoCombGanadoraJugador=-1; // Esto se muestra en el Hito de Ganador CPU
    }
    else
    {
        ptoCombGanadoraJugador=0;
    }

    if(Game_over_PC==true)
    {
        ptoCombGanadoraCPU=-1;// Esto se muestra en el Hito de Ganador Jugador
    }
    else
    {
        ptoCombGanadoraCPU=0;
    }
    if (desafioOverJugador==true)
    {
        ptoDesafioJugador=-1;// Esto se muestra en el Hito de Ganador CPU
    }
    else
    {
        ptoDesafioJugador=0;
    }
    if (desafioOverPC==true)
    {
        ptoDesafioCPU=-1;// Esto se muestra en el Hito de Ganador Jugador
    }
    else
    {
        ptoDesafioCPU=0;
    }


    rlutil::cls();

    if(winner == true)//Jugador gano la partida
    {
        ptoTotalJugador+=3;
        ptoTotalJugador = ptoTotalJugador + ptoCombGanadoraCPU + ptoDesafioCPU + rondaGanadaJugador + rondaGanadaElemtoJugador;
        cout << "-------------------------------------------------------------------"<< endl;
        cout << "HITO"<< "                                               "<<nombre<<endl;
        cout << "-------------------------------------------------------------------"<< endl;
        cout << "Ganador de la Partida                                         3PDV"<< endl;
        cout << "Combinacion elementos cumplido x contrario                   " << ptoCombGanadoraCPU << "PDV" << endl;
        cout << "Carta desafio cumplido x contrario                           " << ptoDesafioCPU << "PDV" <<endl;
        cout << "Rondas ganadas al adversario                                 " << rondaGanadaJugador << "PDV" << endl;
        cout << "Rondas ganadas al adversario con igual elemento              " << rondaGanadaElemtoJugador << "PDV" << endl;
        cout << "-------------------------------------------------------------------"<< endl;
        cout << "TOTAL                                                        " << ptoTotalJugador << "PDV" << endl;
    }

    if(winner == false)//CPU gano la partida
    {
        ptoTotalCPU+=3;
        ptoTotalCPU = ptoTotalCPU + ptoCombGanadoraJugador + ptoDesafioJugador + rondaGanadaCPU + rondaGanadaElementoCPU;
        cout << "-------------------------------------------------------------------"<< endl;
        cout << "HITO"<< "                                                      CPU "<< endl;
        cout << "-------------------------------------------------------------------"<< endl;
        cout << "Ganador de la Partida                                          3PDV" << endl;
        cout << "Combinacion elementos cumplido x contrario                    " << ptoCombGanadoraJugador << "PDV" << endl;
        cout << "Carta desafio cumplido x contrario                            " << ptoDesafioJugador << "PDV" <<endl;
        cout << "Rondas ganadas al adversario                                  " << rondaGanadaCPU << "PDV" << endl;
        cout << "Rondas ganadas al adversario con igual elemento               " << rondaGanadaElementoCPU << "PDV" << endl;
        cout << "-------------------------------------------------------------------"<< endl;
        cout << "TOTAL                                                         " << ptoTotalCPU << "PDV" << endl;
    }

}
