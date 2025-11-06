#ifndef FUNCIONES_H
#define FUNCIONES_H

void mostrarMenu();
void jugarUnJugador();
void mostrarCreditos();
void tirarDados(int dados[], int cantidad);
void mostrarDados(int dados[], int cantidad, int numLanzamiento);
void contarDados(int dados[], int conteo[]);
bool esGenerala(int conteo[]);
bool esPoker(int conteo[]);

#endif // FUNCIONES_H
