#include <iostream>
#include "rlutil.h"

using namespace std;

int reglasJuego()
{
    int op;
    int salir=1;
    char respuesta;
    rlutil::cls();

    rlutil::locate(26, 4);
    cout<< "R E G L A M E T O"<<endl<<endl<<
        "El objetivo general del juego es lograr una combinacion de cartas de elementos"<<endl<<
        "y cumplir con la carta objetivo obtenida al comienzo de la partida."<<endl<<
        "El primer jugador en cumplir ambos hitos GANA el juego."<<endl<<endl<<
        "Se dispone de dos tipos de mazos distintos que intervienen en distintas etapas"<<endl<<
        "del juego:"<<endl<<endl<<
        "Uno de ellos es el MAZO DE CARTAS DESAFIO y el otro es el MAZO DE CARTAS DE"<<endl<<
        "ELEMENTOS."<<endl<<endl<<
        "Las CARTAS DESAFIO tienen un desafio a cumplir. En total existen diez cartas "<< endl<<
        "en este mazo."<<endl<<
        "Antes de comenzar una partida, cada jugador debe robar una carta del mazo de"<< endl<<
        "desafio y plantearse como objetivo cumplirlo cuanto antes."<<endl<< endl<<
        "Las CARTAS ELEMENTO son las que hacen posible el transcurso de la partida."<<endl<<
        "En primer lugar, son las que pueden marcar un desafio como cumplido y, por"<<endl<<
        "otro lado, son las que permiten transcurridas las diferentes manos del juego"<< endl<<
        "cumplir el segundo hito que finalice la partida."<<endl<<endl<<


        "MAZO DE CARTAS DESAFIO"<<endl<<endl<<

        "1  - Ganar una carta de Nieve."<<endl<<
        "2  - Ganar una carta de Fuego."<<endl<<
        "3  - Ganar una carta de Agua."<<endl<<
        "4  - Ganar dos cartas rojas."<<endl<<
        "5  - Ganar dos cartas amarillas."<<endl<<
        "6  - Ganar dos cartas verdes."<<endl<<
        "7  - Ganar dos cartas azules."<<endl<<
        "8  - Ganar una carta con el mismo elemento que el adversario."<<endl<<
        "9  -Ganar dos cartas con el mismo numero."<<endl<<
        "10 - Ganar dos rondas de manera consecutiva."<<endl<<endl<<

        "Las cartas desafio son elegidas al comenzar la partida por cada jugador."<<endl<<
        "Cada jugador conocera unicamente su carta desafio y cumplirlo sera excluyente"<< endl<<
        "para ganar la partida."<<endl<<endl<<

        "MAZO DE CARTAS ELEMENTO"<<endl<<endl<<

        "Otra parte del juego requiere el uso de este mazo de cartas."<<endl<<
        "Estas cartas se caracterizan por tener un elemento (fuego, nieve o agua),"<<endl<<
        "un color (rojo, amarillo, verde y azul) y un numero (de 1 a 5). En total son"<<endl<<
        "60 naipes. Estas cartas son necesarias para jugar en las rondas de elementos."<<endl<<endl<<


        "Transcurso del juego"<<endl<<endl<<

        "Cada jugador comienza la partida con tres cartas de elementos repartidas al" <<endl<<
        "azar. Y podra robar una de la pila en cada ronda."<<endl<<
        "Tambien, en cada ronda debera jugar una para competir con la que juegue su"<<endl<<
        "adversario. Esto quiere decir que puede recuperar la carta jugada y ganar la" <<endl<<
        "del adversario o bien perderla."<<endl<<
        "El juego comienza con la etapa denominada Etapa de desafios. Aqui, cada uno"<<endl<<
        "de los dos jugadores debera tomar una carta de la pila de cartas desafios y"<<endl<<
        "guardarla. Luego, comienza la etapa denominada Etapa de elementos. Esta etapa"<<endl<<
        "no tiene una cantidad exacta de rondas sino que finaliza cuando uno de los"<<endl<<
        "jugadores logra cumplir dos circunstancias de juego:"<<endl<<
        "-. Lograr lo que su carta desafio indica"<<endl<<
        "-. Obtener una combinacion de elementos ganadora"<<endl<<endl<<

        "Al comenzar la etapa de elementos, a cada jugador se le reparten tres cartas"<<endl<<
        "de la pila de cartas de elementos."<<endl<<
        "Luego, y en cada una de las rondas de esta etapa, los jugadores roban una"<<endl<<
        "carta de la pila de naipes de elementos. A continuacion cada jugador juega una"<<endl<<
        "carta de elementos de su preferencia y se determina quien gana esa ronda."<<endl<<
        "Para determinar esto se siguen las siguientes reglas:"<<endl<<endl<<
        "-. El fuego vence a la nieve."<<endl<<
        "-. La nieve vence al agua."<<endl<<
        "-. El agua vence al fuego."<<endl<<endl<<
        "Las anteriores reglas se cumplen indistintamente del color y numero que tenga" <<endl<<
        "el naipe. Por ejemplo, cualquier carta de fuego #1 vence a cualquier carta de"<<endl<<
        "nieve #5. Si las cartas jugadas en la ronda son del mismo elemento, se resuelve" <<endl<<
        "el ganador de la ronda con el valor numerico mas alto."<<endl<<
        "Por ejemplo, la carta de fuego #4 vence a la carta de fuego #2."<<endl<<
        "Luego de determinar el ganador de la ronda, ambas cartas pasan a ser parte de"<<endl<<
        "la mano del jugador que gano. Esto significa que un jugador puede llegar a" <<endl<<
        "tener muchas cartas en su mano si gana muchas rondas. No obstante, un jugador" <<endl<<
        "nunca puede tener menos de tres cartas en su mano."<<endl<<endl<<

        "Obtener una combinacion de elementos ganadora"<<endl<<endl<<

        "Para obtener una combinacion de elementos ganadora, un jugador debe lograr"<<endl<<
        "alguna de las siguientes situaciones:"<<endl<<endl<<

        "-. Tener tres cartas de distinto elemento y distinto color."<<endl<<
        "-. Tener tres cartas del mismo elemento."<<endl<<endl<<

        "Por ejemplo, las siguientes situaciones logran una combinacion ganadora de"<<endl<<
        "elementos:"<<endl<<endl<<

        "Ejemplo 1"<<endl<<endl<<
        "   Nieve #2 verde       <<<<<"<<endl<<
        "   Nieve #1 azul"<<endl<<
        "   Agua  #3 azul        <<<<<"<<endl<<
        "   Fuego #5 amarillo    <<<<<"<<endl<<endl<<

        "Ejemplo 1"<<endl<<endl<<
        "   Nieve #2 verde      <<<<<"<<endl<<
        "   Nieve #3 amarillo   <<<<<"<<endl<<
        "   Fuego #4 azul"<<endl<<
        "   Fuego #2 azul"<<endl<<
        "   Agua  #1 rojo"<<endl<<
        "   Nieve #1 azul       <<<<<"<<endl<<endl<<

        "Obtener una combinacion de elementos ganadora, sin embargo, no es sinonimo"<<endl<<
        "de haber ganado la partida."<<endl<<
        "Para ganar la partida es necesario tambien cumplir el objetivo de la carta"<<endl<<
        "desafio."<<endl<<
        "El primer jugador en obtener una combinacion de elementos ganadora y cumplir"<<endl<<
        "el objetivo de su carta desafio gana la partida."<<endl<<endl<<

        "Una vez finalizada la partida, se determinan los puntos de victoria de la"<<endl<<
        "misma. Los mismos se calculan de la siguiente manera:"<<endl<<endl<<

        "   +3 PDV por haber ganado la partida"<<endl<<
        "   -1 PDV si el contrario obtuvo una combinacion de elementos ganadora"<<endl<<
        "   -1 PDV si el contrario cumplio el objetivo de su carta desafio"<<endl<<
        "   +1 PDV por cada ronda ganada en el juego al adversario"<<endl<<
        "   +5 PDV por cada ronda ganada en el juego con un elemento igual al del"<<endl<<
		"      adversario"<<endl<<endl<<endl;
    cout<<"PRESIONE UNA TECLA CUALQUIERA PARA VOLVER AL MENU PRINCIPAL. "<<endl;
    rlutil::anykey();
    rlutil::cls();
    rlutil::locate(1, 1);
}
