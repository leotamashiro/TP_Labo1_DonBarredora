#include <iostream>

using namespace std;



int combate_f(int carta1, int carta2)
{
    int ganador=0, rango_jugador=0, rango_cpu=0;
    ////               -fuego   nienve      Agua
    ////// ///////////R Y G  B  R  Y  G  B  R  Y  G  B
    int rango_1[12]= {1,6,11,16,21,26,31,36,41,46,51,56};
    int rango_2[12]= {2,7,12,17,22,27,32,37,42,47,52,57};
    int rango_3[12]= {3,8,13,18,23,28,33,38,43,48,53,58};
    int rango_4[12]= {4,9,14,19,24,29,34,39,44,49,54,59};
    int rango_5[12]= {5,10,15,20,25,30,35,40,45,50,55,60};

//----------------------------------------------------------------------------

    for(int i=0; i<12; i++)                                                // Aca vamos a preguntar que numero de carta son el  jugador y cpu
    {                                                                               // para despues usar en caso de ser ambas cartas el MISMO ELEMENTO.
        if(carta1 == rango_1[i])
        {
            rango_jugador = 1;
        }
        else
        {
            if(carta1 == rango_2[i])
            {
                rango_jugador = 2;
            }
            else
            {
                if(carta1 == rango_3[i])
                {
                    rango_jugador = 3;
                }
                else
                {
                    if(carta1 == rango_4[i])
                    {
                        rango_jugador = 4;
                    }
                    else
                    {
                        if(carta1 == rango_5[i])
                        {
                            rango_jugador = 5;
                        }
                    }
                }
            }
        }
    }

//-----------------------------------------------------------------------------

    for(int i=0; i<12; i++)                                                // Aca vamos a preguntar que numero de carta es la cpu
    {
        if(carta2 == rango_1[i])
        {
            rango_cpu = 1;
        }
        else
        {
            if(carta2 == rango_2[i])
            {
                rango_cpu = 2;
            }
            else
            {
                if(carta2 == rango_3[i])
                {
                    rango_cpu = 3;
                }
                else
                {
                    if(carta2 == rango_4[i])
                    {
                        rango_cpu = 4;
                    }
                    else
                    {
                        if(carta2 == rango_5[i])
                        {
                            rango_cpu = 5;
                        }
                    }
                }
            }
        }
    }


//******************** ACA COMIENZAN LAS COMPARACIONES DE LAS CARTAS****************************************

    if(carta1 >=1 && carta1 <=20)
    {
        if(carta2 >=21 && carta2 <=40)                                                    // Aca FUEGO (J1)  VS  NIEVE (CPU)
        {
            ganador=carta1;
            return ganador;
        }
        else
        {
            if(carta2 >=1 && carta2 <=20)
            {
//-------------------------------------------------------------------------------------

                if(rango_jugador > rango_cpu)                                           // Aca se define quien gana si la carta 2(CPU) es tambien FUEGO!
                {
                    ganador = carta1;
                    return ganador;
                }
                else
                {
                    if(rango_cpu > rango_jugador)
                    {
                        ganador = carta2;
                        return ganador;
                    }
                    else
                    {
                        cout<< "ES UN EMPATE  "<<endl;
                        return -1;
                    }
                }

//--------------------------------------------------------------------------------------
            }
            else                                                                                            // Aca gana carta 2(CPU), por descarte es AGUA!
            {
                ganador= carta2;
                return ganador;
            }
        }
    }

//********************************************************************************************************

    if(carta1 >=21 && carta1 <=40)                                                          // Aca NIEVE(J1) VS AGUA(CPU)!
    {
        if(carta2 >=41 && carta2 <=60)
        {
            ganador=carta1;
            return ganador;
        }
        else
        {
            if(carta2 >=21 && carta2 <=40)
            {
//-------------------------------------------------------------------------------------

                if(rango_jugador > rango_cpu)                                          // Aca se define quien gana si la carta 2(CPU) es tambien NIEVE!
                {
                    ganador = carta1;
                    return ganador;
                }
                else
                {
                    if(rango_cpu > rango_jugador)
                    {
                        ganador = carta2;
                        return ganador;
                    }
                    else
                    {
                        cout<< "ES UN EMPATE  "<<endl;
                        return -1;
                    }
                }

//--------------------------------------------------------------------------------------
            }
            else                                                                                             // Aca gana carta 2(CPU), por descarte es FUEGO!
            {
                ganador= carta2;
                return ganador;
            }
        }
    }

//*******************************************************************************************************

    if(carta1 >=41 && carta1 <=60)                                                          // Aca AGUA(J1) VS FUEGO(CPU)!
        if(carta2 >=1 && carta2 <=20)
        {
            ganador=carta1;
            return ganador;
        }
        else
        {
            if(carta2 >=41 && carta2 <=60)
            {
//-------------------------------------------------------------------------------------

                if(rango_jugador > rango_cpu)                                          // Aca se define quien gana si la carta 2(CPU) es tambien AGUA!
                {
                    ganador = carta1;
                    return ganador;
                }
                else
                {
                    if(rango_cpu > rango_jugador)
                    {
                        ganador = carta2;
                        return ganador;
                    }
                    else
                    {
                        cout<< "ES UN EMPATE  "<<endl;
                        return -1;
                    }
                }

//--------------------------------------------------------------------------------------
            }
            else                                                                                          // Aca gana carta 2(CPU), por descarte es NIEVE!
            {
                ganador= carta2;
                return ganador;
            }
        }
}

int devuelveColor(int cartaGanadora){
    //ROJO
    if(cartaGanadora>=1 & cartaGanadora<=5){
            return 1;
    }
    if(cartaGanadora>=21 & cartaGanadora<=25){
            return 1;
    }
    if(cartaGanadora>=41 & cartaGanadora<=45){
            return 1;
    }
    //AMARILLO
    if(cartaGanadora>=6 & cartaGanadora<=10){
            return 2;
    }
    if(cartaGanadora>=26 & cartaGanadora<=30){
            return 2;
    }
    if(cartaGanadora>=46 & cartaGanadora<=50){
            return 2;
    }
    //VERDE
    if(cartaGanadora>=11 & cartaGanadora<=15){
            return 3;
    }
    if(cartaGanadora>=31 & cartaGanadora<=35){
            return 3;
    }
    if(cartaGanadora>=51 & cartaGanadora<=55){
            return 3;
    }
    //AZUL
    if(cartaGanadora>=16 & cartaGanadora<=20){
            return 4;
    }
    if(cartaGanadora>=36 & cartaGanadora<=40){
            return 4;
    }
    if(cartaGanadora>=56 & cartaGanadora<=60){
            return 4;
    }
}


bool combateMismoElemento (int carta1, int carta2)
{
    int ganador=0, rango_jugador=0, rango_cpu=0;
    ////               -fuego   nienve      Agua
    ////// ///////////R Y G  B  R  Y  G  B  R  Y  G  B
    int rango_1[12]= {1,6,11,16,21,26,31,36,41,46,51,56};
    int rango_2[12]= {2,7,12,17,22,27,32,37,42,47,52,57};
    int rango_3[12]= {3,8,13,18,23,28,33,38,43,48,53,58};
    int rango_4[12]= {4,9,14,19,24,29,34,39,44,49,54,59};
    int rango_5[12]= {5,10,15,20,25,30,35,40,45,50,55,60};

//----------------------------------------------------------------------------

    for(int i=0; i<12; i++)                                                // Aca vamos a preguntar que numero de carta son el  jugador y cpu
    {                                                                               // para despues usar en caso de ser ambas cartas el MISMO ELEMENTO.
        if(carta1 == rango_1[i])
        {
            rango_jugador = 1;
        }
        else
        {
            if(carta1 == rango_2[i])
            {
                rango_jugador = 2;
            }
            else
            {
                if(carta1 == rango_3[i])
                {
                    rango_jugador = 3;
                }
                else
                {
                    if(carta1 == rango_4[i])
                    {
                        rango_jugador = 4;
                    }
                    else
                    {
                        if(carta1 == rango_5[i])
                        {
                            rango_jugador = 5;
                        }
                    }
                }
            }
        }
    }

//-----------------------------------------------------------------------------

    for(int i=0; i<12; i++)                                                // Aca vamos a preguntar que numero de carta es la cpu
    {
        if(carta2 == rango_1[i])
        {
            rango_cpu = 1;
        }
        else
        {
            if(carta2 == rango_2[i])
            {
                rango_cpu = 2;
            }
            else
            {
                if(carta2 == rango_3[i])
                {
                    rango_cpu = 3;
                }
                else
                {
                    if(carta2 == rango_4[i])
                    {
                        rango_cpu = 4;
                    }
                    else
                    {
                        if(carta2 == rango_5[i])
                        {
                            rango_cpu = 5;
                        }
                    }
                }
            }
        }
    }


//******************** ACA COMIENZAN LAS COMPARACIONES DE LAS CARTAS****************************************

    if(carta1 >=1 && carta1 <=20)
    {
        if(carta2 >=21 && carta2 <=40)                                                    // Aca FUEGO (J1)  VS  NIEVE (CPU)
        {
            ganador=carta1;
            return false;
        }
        else
        {
            if(carta2 >=1 && carta2 <=20)
            {
//-------------------------------------------------------------------------------------

                if(rango_jugador > rango_cpu)                                           // Aca se define quien gana si la carta 2(CPU) es tambien FUEGO!
                {
                    ganador = carta1;
                    return true;
                }
                else
                {
                    if(rango_cpu > rango_jugador)
                    {
                        ganador = carta2;
                        return true;
                    }
                    else
                    {
                        cout<< "ES UN EMPATE  "<<endl;
                        return false;
                    }
                }

//--------------------------------------------------------------------------------------
            }
            else                                                                                            // Aca gana carta 2(CPU), por descarte es AGUA!
            {
                ganador= carta2;
                return false;
            }
        }
    }

//********************************************************************************************************

    if(carta1 >=21 && carta1 <=40)                                                          // Aca NIEVE(J1) VS AGUA(CPU)!
    {
        if(carta2 >=41 && carta2 <=60)
        {
            ganador=carta1;
            return false;
        }
        else
        {
            if(carta2 >=21 && carta2 <=40)
            {
//-------------------------------------------------------------------------------------

                if(rango_jugador > rango_cpu)                                          // Aca se define quien gana si la carta 2(CPU) es tambien NIEVE!
                {
                    ganador = carta1;
                    return true;
                }
                else
                {
                    if(rango_cpu > rango_jugador)
                    {
                        ganador = carta2;
                        return true;
                    }
                    else
                    {
                        cout<< "ES UN EMPATE  "<<endl;
                        return false;
                    }
                }

//--------------------------------------------------------------------------------------
            }
            else                                                                                             // Aca gana carta 2(CPU), por descarte es FUEGO!
            {
                ganador= carta2;
                return false;
            }
        }
    }

//*******************************************************************************************************

    if(carta1 >=41 && carta1 <=60)                                                          // Aca AGUA(J1) VS FUEGO(CPU)!
        if(carta2 >=1 && carta2 <=20)
        {
            ganador=carta1;
            return false;
        }
        else
        {
            if(carta2 >=41 && carta2 <=60)
            {
//-------------------------------------------------------------------------------------

                if(rango_jugador > rango_cpu)                                          // Aca se define quien gana si la carta 2(CPU) es tambien AGUA!
                {
                    ganador = carta1;
                    return true;
                }
                else
                {
                    if(rango_cpu > rango_jugador)
                    {
                        ganador = carta2;
                        return true;
                    }
                    else
                    {
                        cout<< "ES UN EMPATE  "<<endl;
                        return false;
                    }
                }

//--------------------------------------------------------------------------------------
            }
            else                                                                                          // Aca gana carta 2(CPU), por descarte es NIEVE!
            {
                ganador= carta2;
                return false;
            }
        }
}


bool dosCartasMismoNumero (int carta1, int carta2)
{
    int ganador=0, rango_jugador=0, rango_cpu=0;
    ////               -fuego   nienve      Agua
    ////// ///////////R Y G  B  R  Y  G  B  R  Y  G  B
    int rango_1[12]= {1,6,11,16,21,26,31,36,41,46,51,56};
    int rango_2[12]= {2,7,12,17,22,27,32,37,42,47,52,57};
    int rango_3[12]= {3,8,13,18,23,28,33,38,43,48,53,58};
    int rango_4[12]= {4,9,14,19,24,29,34,39,44,49,54,59};
    int rango_5[12]= {5,10,15,20,25,30,35,40,45,50,55,60};

//----------------------------------------------------------------------------

    for(int i=0; i<12; i++)                                                // Aca vamos a preguntar que numero de carta son el  jugador y cpu
    {                                                                               // para despues usar en caso de ser ambas cartas el MISMO ELEMENTO.
        if(carta1 == rango_1[i])
        {
            rango_jugador = 1;
        }
        else
        {
            if(carta1 == rango_2[i])
            {
                rango_jugador = 2;
            }
            else
            {
                if(carta1 == rango_3[i])
                {
                    rango_jugador = 3;
                }
                else
                {
                    if(carta1 == rango_4[i])
                    {
                        rango_jugador = 4;
                    }
                    else
                    {
                        if(carta1 == rango_5[i])
                        {
                            rango_jugador = 5;
                        }
                    }
                }
            }
        }
    }

//-----------------------------------------------------------------------------

    for(int i=0; i<12; i++)                                                // Aca vamos a preguntar que numero de carta es la cpu
    {
        if(carta2 == rango_1[i])
        {
            rango_cpu = 1;
        }
        else
        {
            if(carta2 == rango_2[i])
            {
                rango_cpu = 2;
            }
            else
            {
                if(carta2 == rango_3[i])
                {
                    rango_cpu = 3;
                }
                else
                {
                    if(carta2 == rango_4[i])
                    {
                        rango_cpu = 4;
                    }
                    else
                    {
                        if(carta2 == rango_5[i])
                        {
                            rango_cpu = 5;
                        }
                    }
                }
            }
        }
    }


//******************** ACA COMIENZAN LAS COMPARACIONES DE LAS CARTAS****************************************

    ///Comparo numero 1
    if(carta1==1 || carta1==6 || carta1==11 || carta1==16)
    {
        if (carta2==21 || carta2==26 || carta2==31 || carta2==36)
        {
            return true; //aca gana carta jugador
        }
        if (carta2==41 || carta2==46 || carta2==51 || carta2==56)
        {
            return true; //aca gana carta pc
        }
        else
        {
            return false;
        }
    }

    ///Comparo numero 2
    if(carta1==2 || carta1==7 || carta1==12 || carta1==17)
    {
        if (carta2==22 || carta2==27 || carta2==32 || carta2==37)
        {
            return true; //aca gana carta jugador
        }
        if (carta2==42 || carta2==47 || carta2==52 || carta2==57)
        {
            return true; //aca gana carta pc
        }
        else
        {
            return false;
        }
    }

    ///Comparo numero 3
    if(carta1==3 || carta1==8 || carta1==13 || carta1==18)
    {
        if (carta2==23 || carta2==28 || carta2==33 || carta2==38)
        {
            return true; //aca gana carta jugador
        }
        if (carta2==43 || carta2==48 || carta2==53 || carta2==58)
        {
            return true; //aca gana carta pc
        }
        else
        {
            return false;
        }
    }

    ///Comparo numero 4
    if(carta1==4 || carta1==9 || carta1==14 || carta1==19)
    {
        if (carta2==24 || carta2==29 || carta2==34 || carta2==39)
        {
            return true; //aca gana carta jugador
        }
        if (carta2==44 || carta2==49 || carta2==54 || carta2==59)
        {
            return true; //aca gana carta pc
        }
        else
        {
            return false;
        }
    }

    ///Comparo numero 5
    if(carta1==5 || carta1==10 || carta1==15 || carta1==20)
    {
        if (carta2==25 || carta2==30 || carta2==35 || carta2==40)
        {
            return true; //aca gana carta jugador
        }
        if (carta2==45 || carta2==50 || carta2==55 || carta2==60)
        {
            return true; //aca gana carta pc
        }
        else
        {
            return false;
        }
    }

    return false;
}
