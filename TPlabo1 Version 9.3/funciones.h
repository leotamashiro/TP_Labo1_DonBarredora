#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void delay(int);
void selector(int);
int jugar();
int sacarCartaBarajada(int, int[], int);
void menu(int);
int creditos();
void cuadro(int, int, int , int );
void carta_desafio (int , int , int , int , int );
void mazo_cartas (int , int , int , int );
void carta_elemento(int , int , int );
int salir();
int reglasJuego();
int repartirCarta (int [], int);
int combate_f(int , int );
int sacarCartaMano (int [], int , int);
int devuelveColor(int );
bool combateMismoElemento (int , int);
//bool dosCartasMismoNumero (int , int);
bool validarSeleccion (int , int [], int);
bool combinacionGanadora2 (int [] , int );
bool combinacionGanadora1 (int [] , int );
bool  dosCartasMismoNumero (int , int  []);
int elementoCarta (int );





#endif // FUNCIONES_H_INCLUDED
