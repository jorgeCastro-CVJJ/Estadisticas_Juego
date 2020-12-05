#include <iostream>
#include <string>
#include <sstream>
#include "Jugador.h"

#ifndef JUGADOREU_H_
#define JUGADOREU_H_

using namespace std;

/*
*Se crea la clase JugadorEU que gereda de Jugador
*/

class JugadorEU : public Jugador {

	private: 
		/*
	  *Se declaran los atributos de la clase
	  *@param euros : divisa del jugador
	  */

		float euros;

	public:
		/*
		*Se crea el Constructor por default y con parametros
		*/
		JugadorEU(){};
		JugadorEU(string,float,int,int);

		/*
		*Se declaran los getters y setter de la  clase
		*/
		float getEuros();
		void setEuros(float);
		
};


//Constructor de la clase 

JugadorEU:: JugadorEU(string n, float wr, int danio, int p){

nickname = n;
winrate = wr;
danioMedio = danio;
partidas = p;
euros = 0.0;

}

/*
*Obtiene los euros en la cuenta del Jugador
*@return euros
*/

float JugadorEU::getEuros() {
	return euros;
}
 

/*
*Modifica los euros que tiene la cuenta del jugador 
*@param money
*@return euros + money
*/

void JugadorEU::setEuros(float money){
	euros = euros + money;
}

#endif