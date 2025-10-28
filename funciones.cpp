#include <iostream>
#include "funciones.h"
#include <cstdlib>
using namespace std;

//funcion que muestra el menu
void mostrarMenu(){
    cout << "----------------------------------------------------------" <<endl;
    cout << "*****************BIENVENIDO A GENERALA*****************"<< endl;
    cout << "----------------------------------------------------------" <<endl;
    cout << "1. Nueva partida (1 jugador)" << endl;
    cout << "2. Nueva partida (2 jugadores)" << endl;
    cout << "3. Ver puntuacion mas alta" << endl;
    cout << "4. Ver creditos" << endl;
    cout << "5. Salir" << endl;
    cout << "----------------------------------------------------------" <<endl;
}

//jugar un jugador
void jugarUnJugador(){
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
}

//funcion para tirar dados
void tirarDados(int dados[], int cantidad){
    for (int i=0; i< cantidad; i++){
        dados[i] = 1+ (rand()% 6); //con modulo el resultado siempre es entre 0 y 5, se suma uno para q quiede entre 0 y 6
    }
}

//funcion que muestra los creditos, nombre apellido y legajo
void mostrarCreditos(){
    cout << "************************* CREDITOS ************************" << endl;
    cout << "----------------------------------------------------------" <<endl;
    cout << "PROGRAMACION I - UNIVERSIDAD TECNOLOGICA NACIONAL (FRGP)" << endl;
    cout << "----------------------------------------------------------"<<endl;
    cout << "GRUPO 9" << endl;
    cout << "----------------------------------------------------------"<<endl;
    cout << "INTEGRANTES DEL GRUPO: " << endl;
    cout << "- FRANCISCO CRISTIANI - LEGAJO: " << endl;
    cout << "- FRANCISCO SACKMANN - LEGAJO: " << endl;
    cout << "- FRANCO PACHECO - LEGAJO: " << endl;
    cout << "- RODRIGO GODOY- LEGAJO: " << endl;



}
