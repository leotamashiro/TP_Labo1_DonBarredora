#include <iostream>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Funciones.h"

using namespace std;


/// Ver si solo es de las cartas Ganadas los for tienen que empezar en i=4

//combinacionGanadora2 == true Gano!
bool combinacionGanadora2 (int vec[], int cont)
{
    int fuego=0, nieve=0, agua=0;
    for (int i=0; i<cont; i++)
    {
        if (vec[i]>=1 && vec[i]<=20)
        {
            fuego++;
        }
    }
    for (int i=0; i<cont; i++)
    {
        if (vec[i]>=21 && vec[i]<=40)
        {
            nieve++;
        }
    }
    for (int i=0; i<cont; i++)
    {
        if (vec[i]>=41 && vec[i]<=60)
        {
            agua++;
        }
    }
    if ((fuego>=3)||(nieve>=3)||(agua>=3))
    {
        return true;
    }
    else
    {
        return false;
    }

}

//combinacionGanadora1 == true Gano!
bool combinacionGanadora1 (int vec[], int cont)
{
    for (int i=0; i<cont; i++)
    {
        ////////Fuego Rojo/////
        if (vec[i]>=1 && vec[i]<=5) // Fuego Rojo ?
        {
            for (int j=0; j<cont; j++)
            {
                if (vec[j]>=26 && vec[j]<=30) // Nieve Amarillo?
                {
                    for (int k=0; k<cont; k++)
                    {
                        if (vec[k]>=51 && vec[k]<=60)// Agua, verde o azul
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }

                else if (vec[j]>=31 && vec[j]<=35) // Nieve Verde?
                {
                    for (int k=0; k<cont; k++)
                    {
                        if ((vec[k]>=46 && vec[k]<=50) || (vec[k]>=56 && vec[k]<=60)) // Agua Amarillo o Azul
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }

                else if (vec[j]>=36 && vec[j]<=40) // Nieve Azul??
                {
                    for (int k=0; k<cont; k++)
                    {
                        if (vec[k]>=46 && vec[k]<=55) // Agua Amarillo o Verde
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }

                    }
                }
                else
                {
                    return false;
                }
            }
        }

        ////Termina Fuego Rojo

        ////Fuego Amarillo
        else if (vec[i]>=6 && vec[i]<=10) // Fuego Amarillo ?
        {
            for (int j=0; j<cont; j++)
            {
                if (vec[j]>=21 && vec[j]<=25) // Nieve Rojo?
                {
                    for (int k=0; k<cont; k++)
                    {
                        if (vec[k]>=51 && vec[k]<=60) // Agua, verde o azul
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }

                else if (vec[j]>=31 && vec[j]<=35) // Nieve Verde?
                {
                    for (int k=0; k<cont; k++)
                    {
                        if ((vec[k]>=41 && vec[k]<=45) || (vec[k]>=56 && vec[k]<=60)) // Agua rojo o Azul
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }

                else if (vec[j]>=36 && vec[j]<=40) // Nieve Azul??
                {
                    for (int k=0; k<cont; k++)
                    {
                        if ((vec[k]>=41&& vec[k]<=45) || (vec[k]>=51&& vec[k]<=55))// Agua rojo o Verde
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        ////Termina Fuego Amarillo


        ////Empieza Fuego Verde
        else if (vec[i]>=11 && vec[i]<=15) // Fuego Verde ?
        {
            for (int j=0; j<cont; j++)
            {
                if (vec[j]>=21 && vec[j]<=25) // Nieve Rojo?
                {
                    for (int k=0; k<cont; k++)
                    {
                        if ((vec[k]>=46 && vec[k]<=50) || (vec[k]>=56 && vec[k]<=60)) // Agua, amarillo o azul
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }

                else if (vec[j]>=26 && vec[j]<=30) // Nieve amarillo?
                {
                    for (int k=0; k<cont; k++)
                    {
                        if ((vec[k]>=41 && vec[k]<=45) || (vec[k]>=56 && vec[k]<=60)) // Agua rojo o Azul
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }

                else if (vec[j]>=36 && vec[j]<=40) // Nieve Azul??
                {
                    for (int k=0; k<cont; k++)
                    {
                        if (vec[k]>=41&& vec[k]<=50)// Agua rojo o amarillo
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        ////Termina Fuego Verde


        ////Empieza Fuego Azul
        else if (vec[i]>=16 && vec[i]<=20) // Fuego azul ?
        {
            for (int j=0; j<cont; j++)
            {
                if (vec[j]>=21 && vec[j]<=25) // Nieve Rojo?
                {
                    for (int k=0; k<cont; k++)
                    {
                        if ((vec[k]>=46 && vec[k]<=50) || (vec[k]>=56 && vec[k]<=60)) // Agua, amarillo o verde
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }

                else if (vec[j]>=26 && vec[j]<=30) // Nieve amarillo?
                {
                    for (int k=0; k<cont; k++)
                    {
                        if ((vec[k]>=41 && vec[k]<=45) || (vec[k]>=51 && vec[k]<=55)) // Agua rojo o Azul
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }

                else if (vec[j]>=31 && vec[j]<=35) // Nieve verde??
                {
                    for (int k=0; k<cont; k++)
                    {
                        if ((vec[k]>=41 && vec[k]<=45) || (vec[k]>=46 && vec[k]<=50))// Agua rojo o amarillo
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        ////Termina Fuego Azul
        else
        {
            return false;
        }
    }
}

