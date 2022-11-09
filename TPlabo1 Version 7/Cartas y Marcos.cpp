#include <iostream>
#include "rlutil.h"

using namespace std;


void cuadro(int x1, int y1, int x2, int y2)
{
    int i;

    for (i=x1; i<=x2; i++)
    {
        rlutil::locate(i,y1);
        printf("%c",205); //Linea horizontal del cuadro
        rlutil::locate(i,y2);
        printf("%c",205);//Linea horizontal del cuadro
    }
    for (i=y1; i<=y2; i++)
    {
        rlutil::locate(x1,i);
        printf("%c",186);//Linea vertical del cuadro
        rlutil::locate(x2,i);
        printf("%c",186);//Linea vertical del cuadro
    }
    rlutil::locate(x1,y1);
    printf("%c",201);//Vertice del cuadro
    rlutil::locate(x1,y2);
    printf("%c",200);
    rlutil::locate(x2,y1);
    printf("%c",187);
    rlutil::locate(x2,y2);
    printf("%c",188);

}

void carta_desafio (int x1, int y1, int x2, int y2, int n)
{
    int i;

    for (int j=x1; j<=(x2-1); j++)
    {
        for (int x=y1; x<=(y2-1); x++)
        {
            rlutil::setBackgroundColor(15);
            rlutil::locate(j+1,x+1);
            cout<< " ";
        }
    }
    rlutil::setBackgroundColor(0);



    for (i=x1; i<=x2; i++)
    {
        rlutil::locate(i,y1);
        printf("%c",205);//Linea horizontal del cuadro
        rlutil::locate(i,y2);
        printf("%c",205);//Linea horizontal del cuadro
    }
    for (i=y1; i<=y2; i++)
    {
        rlutil::locate(x1,i);
        printf("%c",186);//Linea vertical del cuadro
        rlutil::locate(x2,i);
        printf("%c",186);//Linea vertical del cuadro
    }

    rlutil::locate(x1,y1);
    printf("%c",201);//Vertice del cuadro
    rlutil::locate(x1,y2);
    printf("%c",200);
    rlutil::locate(x2,y1);
    printf("%c",187);
    rlutil::locate(x2,y2);
    printf("%c",188);

    if (n==1)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(47,15);
        cout<<"Ganar una ";
        rlutil::locate(48,16);
        cout<<"carta de ";
        rlutil::locate(49,19);
        cout<<"NIEVE";
    }
    if (n==2)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(47,15);
        cout<<"Ganar una ";
        rlutil::locate(48,16);
        cout<<"carta de ";
        rlutil::locate(49,19);
        cout<<"FUEGO";
    }
    if (n==3)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(47,15);
        cout<<"Ganar una ";
        rlutil::locate(48,16);
        cout<<"carta de ";
        rlutil::locate(50,19);
        cout<<"AGUA";
    }
    if (n==4)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(44,15);
        cout<<"Ganar dos cartas";
        rlutil::locate(49,19);
        cout<<"ROJAS";
    }
    if (n==5)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(44,15);
        cout<<"Ganar dos cartas";
        rlutil::locate(47,19);
        cout<<"AMARILLAS";
    }
    if (n==6)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(44,15);
        cout<<"Ganar dos cartas";
        rlutil::locate(48,19);
        cout<<"VERDES";
    }
    if (n==7)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(44,15);
        cout<<"Ganar dos cartas";
        rlutil::locate(48,19);
        cout<<"AZULES";
    }
    if (n==8)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(45,15);
        cout<<"Ganar una carta";
        rlutil::locate(46,16);
        cout<<"con el mismo";
        rlutil::locate(45,17);
        cout<<"elemento que tu";
        rlutil::locate(47,19);
        cout<<"ADVERSARIO";
    }
    if (n==9)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(44,15);
        cout<<"Ganar dos cartas";
        rlutil::locate(46,16);
        cout<<"con el mismo";
        rlutil::locate(49,19);
        cout<<"NUMERO";
    }
    if (n==10)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(46,12);
        cout<<"CARTA DESAFIO";
        rlutil::locate(44,15);
        cout<<"Ganar dos rondas";
        rlutil::locate(47,16);
        cout<<"de manera";
        rlutil::locate(46,19);
        cout<<"CONSECUTIVA";
    }

    rlutil::setBackgroundColor(0);
    rlutil::setColor(15);
}

void mazo_cartas (int x1, int y1, int x2, int y2)
{
    int i;

    for (int j=x1; j<=(x2-1); j++)
    {
        for (int x=y1; x<=(y2-1); x++)
        {
            rlutil::setBackgroundColor(4);
            rlutil::locate(j+1,x+1);
            printf("%c",177);
        }
    }
    rlutil::setBackgroundColor(0);

    for (i=x1; i<=x2; i++)
    {
        rlutil::locate(i-1,y1-1);
        printf("%c",205);//Linea horizontal del cuadro
        rlutil::locate(i,y1);
        printf("%c",205);//Linea horizontal del cuadro
        rlutil::locate(i,y2);
        printf("%c",205);//Linea horizontal del cuadro
    }
    for (i=y1; i<=y2; i++)
    {
        rlutil::locate(x1-1,i-1);
        printf("%c",186);//Linea vertical del cuadro
        rlutil::locate(x1,i);
        printf("%c",186);//Linea vertical del cuadro
        rlutil::locate(x2,i);
        printf("%c",186);//Linea vertical del cuadro
    }

    rlutil::locate(x1-1,y1-1);
    printf("%c",201);
    rlutil::locate(x2-1,y1-1);
    printf("%c",187);
    rlutil::locate(x1-1,y2-1);
    printf("%c",200);

    rlutil::locate(x1,y1);
    printf("%c",201);//Vertice del cuadro
    rlutil::locate(x1,y2);
    printf("%c",200);
    rlutil::locate(x2,y1);
    printf("%c",187);
    rlutil::locate(x2,y2);
    printf("%c",188);

    rlutil::setBackgroundColor(0);
}

void carta_elemento(int n, int x, int y)
{

    if (n==1)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==2)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==3)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y+0);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==4)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==5)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==6)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==7)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==8)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==9)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==10)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";;
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==11)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==12)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==13)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==14)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==15)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==16)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==17)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);
        ;
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==18)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==19)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==20)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c   %c   %c",186,40,186);
        rlutil::locate(x,y+4);
        printf("%c   %c%c  %c",186,41,92,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c%c %c",186,40,40,95,41,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==21)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==22)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==23)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==24)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==25)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==26)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==27)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==28)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==29)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==30)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==31)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==32)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==33)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);
        ;
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==34)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==35)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==36)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==37)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==38)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==39)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==40)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+3);
        printf("%c %c%c%c%c%c %c",186,42,92,124,47,42,186);
        rlutil::locate(x,y+4);
        printf("%c%c%c%c%c%c%c%c%c",186,35,45,45,79,45,45,35,186);
        rlutil::locate(x,y+5);
        printf("%c %c%c%c%c%c %c",186,42,47,124,92,42,186);
        rlutil::locate(x,y+6);
        printf("%c %c %c %c %c",186,35,35,35,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==41)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==42)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
       cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==43)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==44)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
       cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==45)
    {
        rlutil::setColor(rlutil::RED);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==46)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==47)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==48)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==49)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==50)
    {
        rlutil::setColor(rlutil::YELLOW);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
       cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==51)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==52)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==53)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
       cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==54)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
       cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==55)
    {
        rlutil::setColor(rlutil::GREEN);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
       cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==56)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,49,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,49,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
       cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==57)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,50,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,50,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==58)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,51,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,51,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
       cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==59)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,52,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,52,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    if (n==60)
    {
        rlutil::setColor(rlutil::BLUE);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(x,y);
        printf("%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,187);
        rlutil::locate(x,y+1);
        printf("%c%c      %c",186,53,186);
        rlutil::locate(x,y+2);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+3);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+4);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+5);
        printf("%c  %c%c%c  %c",186,126,126,126,186);
        rlutil::locate(x,y+6);
        printf("%c       %c",186,186);
        rlutil::locate(x,y+7);
        printf("%c      %c%c",186,53,186);
        rlutil::locate(x,y+8);
        printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);

        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(x,y+9);
        cout<< "         ";
        rlutil::setBackgroundColor(rlutil::BLACK);
    }


    rlutil::setBackgroundColor(0);
    rlutil::setColor(15);
}
