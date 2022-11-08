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
