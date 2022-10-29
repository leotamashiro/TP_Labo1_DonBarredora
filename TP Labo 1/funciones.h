#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void menu(int y);
int reglasJuego();
int creditos();
int salir();
void cuadro(int x1, int y1, int x2, int y2);
void carta_desafio(int x1, int y1, int x2, int y2, int n);
void mazo_cartas(int x1, int y1, int x2, int y2);
int robar_1();
int robar_2();

bool verfNum(int, int [], int );
int armarMazo();
int repartir(int[] , int);

int repartirJugador (int [], int , int [], int );
void mostrarMano(int [], int);

/*
int repartirCPU(int [],int ,[], int);
int repartirJugador(int [],int ,int [],int);
*/
#endif // FUNCIONES_H_INCLUDED
