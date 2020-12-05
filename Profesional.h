#include <iostream>
#include <string>
#include <sstream>
#include "Jugador.h"
#include "JugadorEU.h"
#include "JugadorNA.h"

#ifndef PROFESIONAL_H_
#define PROFESIONAL_H_


using namespace std; 
 
/*
*Se declara la calse profesional agregacion que recibe valores de las clases hijas JugadorEU y JugadorNA
*/

class Profesional {
	private:
		/*
		*Se declaran los atributos que usa la clase
		*/
		JugadorNA playerN[10];
		JugadorEU playerE[10];
		int tam;
		int tam2; 

	public: 

		/*
		*Se declara el constructor por default
		*/
		Profesional();
		
		/*
		*Se declaran los getters y setter de la clase
		*/
		void getJugadoresNA();
		void setJugadorNA(JugadorNA);

		void getJugadoresEU();
		void setJugadorEU(JugadorEU);

};

/*
*Se crea el constructor por default
*/

Profesional::Profesional(){
	tam = 0;
	tam2 = 0;
}

/*
*Se agregan los jugadores a la lista
*@param JugadorNA jugador
*/

void Profesional :: setJugadorNA(JugadorNA jugador){
	playerN[tam]= jugador;
	tam++;
}

/*
*Se obtiene la el jugador
*@return playerN[i]
*/

void Profesional :: getJugadoresNA(){
	for (int i=0; i < tam; i++){
		cout << playerN[i].toString(); 
	}
}

/*
*Se agregarn los jugadores a la lista
*@param JugadorEU jugador
*/

void Profesional :: setJugadorEU(JugadorEU jugador){
	playerE[tam2]= jugador;
	tam2++;
}

/*
*Se obtinen los jugadores de la lista
*@return playerE[i]
*/

void Profesional :: getJugadoresEU(){
	for (int i=0; i < tam2; i++){
		cout << playerE[i].toString(); 
	}
}

#endif
