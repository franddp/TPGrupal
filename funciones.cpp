#include <iostream>
#include "funciones.h"
#include <cstdlib>
using namespace std;

///funcion que muestra el menu
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

///jugar un jugador
void jugarUnJugador(){

    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;

    int cantDados = 5;
    int dados[cantDados];
    int puntajeTotal = 0;

    //bucle rondas
    for(int ronda = 1; ronda <=10; ronda++){

        //mostramos info
        cout << "----------------------------------------------------------" <<endl;
        cout << "Turno de: " << nombre << " | Ronda : " << ronda << " | Puntaje total: " << puntajeTotal << " PTS." << endl;

        int numeroLanzamiento = 1;
        bool jugadorPlantado = false;
        char respuestaJugador;

        //mientras el lanzamiento < 3 y el jugador no este plantado
        while(numeroLanzamiento <= 3 && !jugadorPlantado){

            if(numeroLanzamiento == 1){
                tirarDados(dados, cantDados);
                mostrarDados(dados, cantDados, 1);
            } else {
                cout << "CONTINUAR LANZANDO? (S/N)";
                cin >> respuestaJugador;

                if(respuestaJugador == 'S' || respuestaJugador == 's'){
                    int cantidadARelanzar;
                    cout << "CUANTOS DADOS VOLVES A TIRAR?: ";
                    cin >> cantidadARelanzar;

                    for (int i=0; i< cantidadARelanzar; i++){
                        int posicionDado;
                        cout << "CUAL DADO?: ";
                        cin >> posicionDado;

                        int indice = posicionDado - 1;

                        if(indice >= 0 && indice < cantDados){
                            dados[indice] = 1+ (rand()% 6);
                        }
                    }

                    mostrarDados(dados, cantDados, numeroLanzamiento);

                } else{
                    //si la respuesta es N
                    jugadorPlantado = true;
                }
            }
            if(!jugadorPlantado) {
                numeroLanzamiento++;
            }
        }
        ///logica del puntaje
        int conteo[6];
        contarDados(dados, conteo);

        int puntajeRonda = 0;

        if(esGenerala(conteo)){
            puntajeRonda = 50;
        } else if(esPoker(conteo)){
            puntajeRonda = 40;
        }
        cout << "----------------------------------------------------------" <<endl;
        cout << "FIN DE LOS LANZAMIENTOS" << endl;
        cout << "PUNTAJE DE LA RONDA: " << puntajeRonda << " PTS." << endl;
        puntajeTotal += puntajeRonda;

        cout << "Presiona 'c' y luego enter para continuar" << endl;

        char pausa;
        cin >> pausa; // para frenar el programa espera un input

    }




    //fin de juego
    cout << "----------------------------------------------------------" <<endl;
    cout << "FIN DEL JUEGO"<< endl;
    cout << "Puntaje final de "<< nombre << ": " << puntajeTotal << " PTS" << endl;
}

///funcion para tirar dados
void tirarDados(int dados[], int cantidad){
    for (int i=0; i< cantidad; i++){
        dados[i] = 1+ (rand()% 6); //con modulo el resultado siempre es entre 0 y 5, se suma uno para q quiede entre 0 y 6
    }
}

void contarDados(int dados[], int conteo[]){
    for ( int i = 0; i < 6; i++){
        conteo [i]=0;
    }

    //recorrer los 5 dados
    for(int i = 0; i<5; i++){
        int valorDado = dados[i];

        conteo[valorDado -1]++;
    }
}

///funcion para mostrar los 5 dados
void mostrarDados(int dados[], int cantidad, int numLanzamiento){
    cout << "Lanzamiento " << numLanzamiento << endl;
    cout << "Tus dados: ";

    for(int i = 0; i<cantidad; i++){
        cout << dados[i] << " ";
    }
    cout << endl;

}


bool esGenerala(int conteo[]){
    //recorremos las 6 posiciones de conteo
    for(int i = 0; i<6; i++){

        //si en alguna posicion hay un cinco
        if(conteo[i] == 5){
            return true;
        }

    }
    return false;
}

bool esPoker(int conteo[]){
    for(int i = 0; i<6; i++){

        if (conteo[i] == 4){
            return true;
        }

    }
    return false;
}

///funcion que muestra los creditos, nombre apellido y legajo
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


