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
