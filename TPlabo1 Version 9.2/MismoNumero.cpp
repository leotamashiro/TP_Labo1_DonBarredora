#include <iostream>

using namespace std;

bool  dosCartasMismoNumero (int carta, int  iguales[])
{
    int rango_1[12]= {1,6,11,16,21,26,31,36,41,46,51,56};
    int rango_2[12]= {2,7,12,17,22,27,32,37,42,47,52,57};
    int rango_3[12]= {3,8,13,18,23,28,33,38,43,48,53,58};
    int rango_4[12]= {4,9,14,19,24,29,34,39,44,49,54,59};
    int rango_5[12]= {5,10,15,20,25,30,35,40,45,50,55,60};
    bool  cumplido = false;

    for(int i=0; i<12; i++)
    {
        if(carta == rango_1[i])
        {
            iguales[0]++;
            if(iguales[0] == 2)
            {
                cumplido = true;
            }
        }
    }

//---------------------------------------------------------------------------

    for(int i=0; i<12; i++)
    {
        if(carta == rango_2[i])
        {
            iguales[1]++;

            if(iguales[1] == 2)
            {
                cumplido = true;
            }
        }
    }


//---------------------------------------------------------------------------

    for(int i=0; i<12; i++)
    {
        if(carta == rango_3[i])
        {
            iguales[2]++;
            if(iguales[2] == 2)
            {
                cumplido = true;
            }
        }
    }


//---------------------------------------------------------------------------

    for(int i=0; i<12; i++)
    {
        if(carta == rango_4[i])
        {
            iguales[3]++;
            if(iguales[3] == 2)
            {
                cumplido = true;
            }
        }
    }


//---------------------------------------------------------------------------

    for(int i=0; i<12; i++)
    {
        if(carta == rango_5[i])
        {
            iguales[4]++;
            if(iguales[4] == 2)
            {
                cumplido = true;
            }
        }
    }
//---------------------------------------------------------------------------

    return cumplido;
}
