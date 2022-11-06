#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void menu(int y);
void delay(int secs);
int reglasJuego();
int creditos();
int salir();
void cuadro(int x1, int y1, int x2, int y2);
void carta_desafio(int x1, int y1, int x2, int y2, int n);
void mazo_cartas(int x1, int y1, int x2, int y2);
void cartas_repartidas(int vec1[][2]);
void carta_elemento(int n, int x, int y);

#endif // FUNCIONES_H_INCLUDED
