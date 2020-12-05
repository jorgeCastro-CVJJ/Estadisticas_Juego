#include <iostream>
#include <string>
#include <sstream>
#include "Jugador.h"
#include "JugadorEU.h"
#include "JugadorNA.h"

#ifndef PROMEDIO_H_
#define PROMEDIO_H_


using namespace std; 

/*
*Se declara la calse Promedio agregacion que recibe valores de las clases hijas JugadorEU y JugadorNA
*/

class Promedio {
	private:
		/* 
		*Se declaran los atributos de la clase
		*/

		JugadorNA playerN[10];
		JugadorEU playerE[10];
		int tam;
		int tam2; 

	public: 
		/*
		*Se declara al constructor por default
		*/

		Promedio();
		
		/*
		*Se declaran los getters y setter de la clase 
		*/

		void getJugadoresNA();
		void setJugadorNA(JugadorNA);

		void getJugadoresEU();
		void setJugadorEU(JugadorEU);

};

/*
*Se crea el constructor por default de Promedio
*/

Promedio::Promedio(){
	tam = 0;
	tam2 = 0;
}

/*
*Modifica los jugadores que hay en la lista
*@param JugadorNA jugador
*/

void Promedio :: setJugadorNA(JugadorNA jugador){
	playerN[tam]= jugador;
	tam++;
}

/*
*Se obtiene los jugadores que hay en la lista
*@return playerN[i]
*/

void Promedio::getJugadoresNA(){
	for (int i=0; i < tam; i++){
		cout << playerN[i].toString(); 
	}
}

/*
*Modifica los jugadores que hay en la lsita
*@param JugadorEU jugador
*/

void Promedio :: setJugadorEU(JugadorEU jugador){
	playerE[tam2]= jugador;
	tam2++;
}

/*
*Se obtiene los jugadores que jay en la lista
*@return playerE[i]
*/
void Promedio::getJugadoresEU(){
	for (int i=0; i < tam2; i++){
		cout << playerE[i].toString(); 
	}
}

#endif