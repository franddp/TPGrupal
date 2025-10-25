#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int opcion;

    ///MOSTRAR MENU
    do{
        mostrarMenu();
        cout << "SELECCIONE UNA OPCION: " << endl;
        cin >> opcion;

        switch(opcion){
    case 1:
        //NUEVA PARTIDA(1 JUGADOR)
        break;
    case 2:
        //NUEVA PARTIDA(2 JUGADORES)
        break;
    case 3:
        //VER PUNTUACION MAS ALTA
        break;
    case 4:
        //VER CREDITOS
        break;
    case 5:
        //SALIR
        cout << "Saliendo del juego..." << endl;
        break;
    default:
        //OPCION NO VALIDA
        cout << "Opcion no valida, intentalo de nuevo" << endl;

        break;
        }
    }while(opcion!=5);






    return 0;
}
