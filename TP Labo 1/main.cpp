#include <iostream>
#include "rlutil.h"
#include "funciones.h"

using namespace std;
void menu(int y);
void selector(int y);
int salir(), creditos(), reglasJuego(), jugar();

int main()
{
    int y=0;
    selector(y);
    return 0;
}

void menu(int y){
switch(y){
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
void selector(int y){
int op=1;
   //captura las teclas para el cursor en menu
   do{
menu(y);
        switch(rlutil::getkey()){
            case 14: //UP
                rlutil::locate(28,10+y);
                cout<< " " <<endl;
                rlutil::locate(49,10+y);
                cout<< " " <<endl;
              if(y==5){
                    y=3;
                    rlutil::locate(28,10+y);
                    cout<< " " <<endl;
                    rlutil::locate(49,10+y);
                    cout<< " " <<endl;
                    cout <<y;
                }else{
                y--;
                }
                //y--;

                if(y<0){
                    y=0;
                }
                break;
            case 15: //down
                rlutil::locate(28,10+y);
                cout<< " " <<endl;
                rlutil::locate(49,10+y);
                cout<< " " <<endl;
               if(y==3){
                    y=5;
                    rlutil::locate(28,10+y);
                    cout<< " " <<endl;
                    rlutil::locate(49,10+y);
                    cout<< " " <<endl;

                }else{
                y++;
                }
                //y++;
                if(y>5){
                    y=5;
                }
                break;

            case 1: //enter
                switch(y){
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
    }while(op!=0);
    ///reglas del juego
}
int reglasJuego(){
 int op;
 int salir=1;
 char respuesta;
 rlutil::cls();
            rlutil::cls();
            rlutil::locate(1, 1);
            cout<<"Cantidad maxima de integrantes: Cinco."<<endl<<endl<<
        "Card Jitsu ++  es una variante de juego de cartas de dos jugadores que toma como base el juego Card Jitsu que se podia jugar antiguamente"
        " en el sitio de Club Penguin."<<endl<<endl<<
"El objetivo general del juego es lograr una combinacion de cartas de elementos y cumplir con la carta objetivo obtenida al comienzo de la partida."<<endl<<
"El primer jugador en cumplir ambos hitos gana el juego."<<endl<<endl<<
"Una partida de Card Jitsu ++ debe jugarse con una serie de cartas especiales. El mismo dispone de dos tipos de mazos distintos que intervienen en distintas etapas del juego:"<<endl<<
    "uno de ellos es el mazo de cartas desafio y el otro es el mazo de cartas de elementos."<<endl<<endl<<
"Las cartas desafio simplemente contienen un texto con el desafio a cumplir."<<endl<<
"En total existen diez cartas en el mazo de desafios."<<endl<<
"Antes de comenzar una partida, cada jugador debe robar una carta del mazo de desafio y plantearse como objetivo cumplirlo cuanto antes."<<endl<<
"Las cartas de elementos son las que hacen posible el transcurso de la partida."<<endl<<
"En primer lugar, son las que pueden marcar un desafio como cumplido y, por otro lado, son las que permiten transcurridas las diferentes manos del juego cumplir el segundo hito que finalice la partida."<<endl<<endl<<


"Mazo de cartas desafio"<<endl<<
"El mazo de cartas desafio consta de diez cartas que deben ser robadas al comenzar la partida por cada jugador. "<<endl<<
"Cada carta desafio contiene uno de los dos hitos que el jugador debe completar para ganar la partida. El mazo contiene las siguientes cartas:"<<endl<<endl<<


"1 - Ganar una carta de Nieve."<<endl<<
"2 - Ganar una carta de Fuego."<<endl<<
"3 - Ganar una carta de Agua."<<endl<<
"4 - Ganar dos cartas rojas."<<endl<<
"5 - Ganar dos cartas amarillas."<<endl<<
"6 - Ganar dos cartas verdes."<<endl<<
"7 - Ganar dos cartas azules."<<endl<<
"8 - Ganar una carta con el mismo elemento que el adversario."<<endl<<
"9 -Ganar dos cartas con el mismo numero."<<endl<<
"10 - Ganar dos rondas de manera consecutiva."<<endl<<endl<<
"Ejemplo de una carta desafio"<<endl<<
"Las cartas desafio son elegidas al comenzar la partida por cada jugador."<<endl<<
"Cada jugador conocera unicamente su carta desafio y cumplirlo sera excluyente para ganar la partida."<<endl<<

"Mazo de cartas de elementos"<<endl<<
"Otra parte del juego requiere el uso de este mazo de cartas."<<endl<<
" Estas cartas se caracterizan por tener un elemento (fuego, nieve o agua), un color (rojo, amarillo, verde y azul) y un numero (de 1 a 5). En total son 60 naipes."<<endl<<
"Estas cartas son necesarias para jugar en las rondas de elementos."<<endl<<endl<<
"Carta roja de fuego #5"<<endl<<
"Carta azul de nieve #3"<<endl<<
"Carta amarilla de agua #3"<<endl<<endl<<
"Cada jugador comienza la partida con tres cartas de elementos repartidas al azar. Y podra robar una de la pila en cada ronda."<<endl<<
"Tambien, en cada ronda debera jugar una para competir con la juegue su adversario."<<endl<<
"Esto quiere decir que puede recuperar la carta jugada y ganar la del adversario o bien perderla."<<endl<<

"Transcurso del juego"<<endl<<
"El juego comienza con la etapa denominada Etapa de desafios. Aqui, cada uno de los dos jugadores debera tomar una carta de la pila de cartas desafios y guardarla."<<endl<<
"Luego, comienza la etapa denominada Etapa de elementos."<<endl<<"Esta etapa no tiene una cantidad exacta de rondas sino que finaliza cuando uno de los jugadores logra cumplir dos circunstancias de juego:"<<endl<<
"Lograr lo que su carta desafio indica"<<endl<<
"Obtener una combinacion de elementos ganadora"<<endl<<endl<<

"Al comenzar la etapa de elementos, a cada jugador se le reparten tres cartas de la pila de cartas de elementos."<<endl<<
"Luego, y en cada una de las rondas de esta etapa, los jugadores roban una carta de la pila de naipes de elementos."<<endl<<
"A continuacion cada jugador juega una carta de elementos de su preferencia y se determina quien gana esa ronda."<<endl<<"Para determinar esto se siguen las siguientes reglas:"<<endl<<endl<<
"El fuego vence a la nieve."<<endl<<
"La nieve vence al agua."<<endl<<
"El agua vence al fuego."<<endl<<endl<<
"Las anteriores reglas se cumplen indistintamente del color y numero que tenga el naipe."<<endl<<
"Por ejemplo, cualquier carta de fuego #1 vence a cualquier carta de nieve #5."<<endl<<
"Si las cartas jugadas en la ronda son del mismo elemento, se resuelve el ganador de la ronda con el valor numerico mas alto."<<endl<<
"Por ejemplo, la carta de fuego #4 vence a la carta de fuego #2."<<endl<<
"Luego de determinar el ganador de la ronda, ambas cartas pasan a ser parte de la mano del jugador que gano."<<endl<<
"Esto significa que un jugador puede llegar a tener muchas cartas en su mano si gana muchas rondas."<<endl<<
"No obstante, un jugador nunca puede tener menos de tres cartas en su mano."<<endl<<



"Obtener una combinacion de elementos ganadora"<<endl<<
"Para obtener una combinacion de elementos ganadora, un jugador debe lograr alguna de las siguientes situaciones:"<<endl<<endl<<
"-Tener tres cartas de distinto elemento y distinto color."<<endl<<
"-Tener tres cartas del mismo elemento."<<endl<<endl<<

"Por ejemplo, las siguientes situaciones logran una combinacion ganadora de elementos:"<<endl<<endl<<
"Nieve #2 verde"<<endl<<
"Nieve #1 azul"<<endl<<
"Agua #3 azul"<<endl<<
"Fuego #5 amarillo"<<endl<<
"Nieve #2 verde"<<endl<<
"Nieve #3 amarillo"<<endl<<
"Fuego #4 azul"<<endl<<
"Fuego #2 azul"<<endl<<
"Agua #1 rojo"<<endl<<
"Nieve #1 azul"<<endl<<endl<<
"Obtener una combinacion de elementos ganadora, sin embargo, no es sinonimo de haber ganado la partida."<<endl<<
"Para ganar la partida es necesario tambien cumplir el objetivo de la carta desafio."<<endl<<
"El primer jugador en obtener una combinacion de elementos ganadora y cumplir el objetivo de su carta desafio gana la partida."<<endl<<

"Una vez finalizada la partida, se determinan los puntos de victoria de la misma. Los mismos se calculan de la siguiente manera:"<<endl<<endl<<

"+3 PDV por haber ganado la partida"<<endl<<
"-1 PDV si el contrario obtuvo una combinacion de elementos ganadora"<<endl<<
"-1 PDV si el contrario cumplio el objetivo de su carta desafio"<<endl<<
"+1 PDV por cada ronda ganada en el juego al adversario"<<endl<<
"+5 PDV por cada ronda ganada en el juego con un elemento igual al del adversario"<<endl<<endl<<endl;
             cout<<"PRESIONE UNA TECLA CUALQUIERA PARA VOLVER AL MENU PRINCIPAL. "<<endl;
            rlutil::anykey();
            rlutil::cls();
            rlutil::locate(1, 1);
}
///creditos
int creditos(){
 int op;
 int salir=1;
 char respuesta;
 rlutil::cls();
          rlutil::cls();
             rlutil::locate(25,6);
             cout<<"PUBLISHED BY: "<<endl;
             rlutil::locate(25,7);
             cout<<"no me acuerdo el nombre del grupo jeje "<<endl;
             rlutil::locate(25,9);
             cout<<"DIRECTOR#1"<<endl;
             rlutil::locate(25,10);
             cout<<"ANGEL SIMON"<<endl;
             rlutil::locate(25,12);
             cout<<"DIRECTOR #2 "<<endl;
             rlutil::locate(25,13);
             cout<<"BRIAN LARA"<<endl;
              rlutil::locate(75,6);
            cout<<"DEVELOPED BY:"<<endl;
            rlutil::locate(75,8);
             cout<<"TAMASHIRO LEONARDO"<<endl;
            rlutil::locate(75,9);
            cout<<"ARIEL."<<endl;
            rlutil::locate(75,10);
            cout<<"CLINGO FERNANDO."<<endl;
            rlutil::locate(75,11);
            cout<<"CONSTANTINO."<<endl;
            rlutil::locate(75,12);
            cout<<"ALMIRON DAMIAN."<<endl;
            rlutil::locate(15,16);
             cout<<"------------------------------------------------------------------------------------------"<<endl;
             rlutil::locate(22,20);
             cout<<"TRABAJO REALIZADO POR ALUMNOS DE LA TUP, UTN FRGP, EN MODALIDAD VIRTUAL. 2022."<<endl;
            rlutil::locate(5,30);
            cout<<"PRESIONE UNA TECLA CUALQUIERA PARA VOLVER AL MENU PRINCIPAL. ";
            rlutil::locate(5,32);
            rlutil::anykey();
            rlutil::cls();
            }

            int salir(){
    int op;
    int salir=1;
        char respuesta;
        rlutil::cls();

        do{
            rlutil::cls();
            rlutil::locate(30,11);
            cout<<"Desea salir S/N: ?  ";
            rlutil::locate(30,12);
            cin>>respuesta;
            rlutil::cls();
            if(respuesta=='s'||respuesta=='S'){
                salir=0;
                return 0;
                rlutil::cls();
            }else if(respuesta=='n'||respuesta=='N'){
                salir=0;
                return 1;
                rlutil::cls();
            }else{
            rlutil::cls();
            rlutil::locate(30,11);
            cout<<"Por favor ingrse S o N";
            rlutil::locate(30,12);
            cout<<"Presione una tecla para continuar";
            rlutil::anykey();
             rlutil::cls();
            }
        }while(salir!=0);

rlutil::cls();

}


int jugar(){
    int opc;
    char nombre[60];
    int desafio;
    int manoJugador[4];
    int manoPC[4];
    int contRonda;
    int jugarSi;
    bool robar = false;
    rlutil::cls();

    rlutil::locate(30,11);
    cout << "INGRESE SU NOMBRE:" << endl;
    rlutil::locate(30,12);
    cin >> nombre;
    contRonda = 0;
    jugarSi=0;
    rlutil::cls();
    rlutil::locate(30,11);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(30,12);
    cout << "--------------------------" << endl;
    rlutil::locate(30,13);
    cout << nombre << " VS CPU" << endl;
    rlutil::locate(30,14);
    cout << "RONDA #" << contRonda + 1 << endl; //falta contar cuando termina la ronda
    // ACA IRIRA EL RANDOM Y HAY QUE GUARDARLO EN EL CHAR desafio[2];
    int valor=0;

    cout << endl;
    rlutil::locate(30,15);
    cout << "SELECCIONANDO TU CARTA DESAFIO ......." << endl;
    //podriamos hacer un dibujo de una carta
    //hay que poner una pausa aca
    desafio = rand() % 11;

    cout << endl << endl;
    system("pause");
    rlutil::cls();
    cout << endl << endl;
    do{
        rlutil::locate(30,11);
        cout << "CARD-JITSU++" << endl;
        rlutil::locate(30,12);
        cout << "--------------------------" << endl;
        rlutil::locate(30,13);
        cout << nombre << " VS CPU" << endl;
        rlutil::locate(30,14);
        cout << "RONDA #" << contRonda + 1 << endl;
        cout <<  endl;
        rlutil::locate(30,15);
        cout << "[1] - VER CARTA DESAFIO" << endl;
        rlutil::locate(30,16);
        cout << "[2] - VER CARTAS ELEMENTOS" << endl;
        if(robar == false){
            rlutil::locate(30,17);
            cout << "[3] - ROBAR CARTA ELEMENTO DE LA PILA" << endl;
        }
        if(robar == true){
            rlutil::locate(30,18);
            cout << "[3] - JUGAR UNA CARTA" << endl;
        }
        rlutil::locate(30,19);
        cout << "OPCION? (1-3)" << endl;
        rlutil::locate(30,20);
        cin >> opc;
        rlutil::cls();
        switch(opc){
        case 1:
            // aca iria un switch y dependiendo que numero es te muestre la leyendo de lo que tenes que hacer o te muestre en forma de carta
            switch(desafio){
            case 1:
                //hay que arreglar la pos de las cartas
                dibujarCard(8,6);
                rlutil::locate(30,12);
                cout << "TU CARTA DESAFIO ES:" << endl;
                rlutil::locate(30,13);
                cout << "--------------------" << endl;
                rlutil::locate(30,14);
                cout << "GANAR UNA CARTA DE NIEVE" << endl;
                system("pause");
                rlutil::cls();
                break;
            case 2:
                dibujarCard(8,6);
                rlutil::locate(30,12);
                cout << "TU CARTA DESAFIO ES:" << endl;
                rlutil::locate(30,13);
                cout << "--------------------" << endl;
                rlutil::locate(30,14);
                cout << "GANAR UNA CARTA DE FUEGO" << endl;
                system("pause");
                rlutil::cls();
                break;
            case 3:
                dibujarCard(8,6);
                rlutil::locate(30,12);
                cout << "TU CARTA DESAFIO ES:" << endl;
                rlutil::locate(30,13);
                cout << "--------------------" << endl;
                rlutil::locate(30,14);
                cout << "GANAR UNA CARTA DE AGUA" << endl;
                system("pause");
                rlutil::cls();
                break;
            case 4:
                dibujarCard(8,6);
                rlutil::locate(30,12);
                cout << "TU CARTA DESAFIO ES:" << endl;
                rlutil::locate(30,13);
                cout << "--------------------" << endl;
                rlutil::locate(30,14);
                cout << "GANAR DOS CARTAS ROJAS" << endl;
                system("pause");
                rlutil::cls();
                break;
            case 5:
                dibujarCard(8,6);
                rlutil::locate(30,12);
                cout << "TU CARTA DESAFIO ES:" << endl;
                rlutil::locate(30,13);
                cout << "--------------------" << endl;
                rlutil::locate(30,14);
                cout << "GANAR DOS CARTAS AMARILLAS" << endl;
                system("pause");
                rlutil::cls();
                break;
            case 6:
                dibujarCard(8,6);
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
                dibujarCard(8,6);
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
                dibujarCard(8,6);
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
                dibujarCard(8,6);
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
                dibujarCard(8,6);
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
            break;
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

    }while(contRonda!=15);//ver si es asi


}
