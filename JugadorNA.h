#include <iostream>
#include <string>
#include <sstream>
#include "Jugador.h"

#ifndef JUGADORNA_H_
#define JUGADORNA_H_

using namespace std;

/*
*Se crea la clase JugadorNA que hereda de Jugador
*/

class JugadorNA : public Jugador {
	private: 
	/*
	*Se declara el atibuto de la clase
	*/
		float dollars;

	public:
	/*
	*Se declaran los Constructores por default y con parametros
	*/

		JugadorNA(){};
		JugadorNA(string,float,int,int);
		/*
		*Se declaran los metodos de la clase JuganorNA
		*/
		
		float getDollars();
		void setDollars(float);
		
};


/*
*Constructor con parametros de la clase JugadorNA
*/

JugadorNA:: JugadorNA(string n, float wr, int danio, int p){

nickname = n;
winrate = wr;
danioMedio = danio;
partidas = p;
dollars = 0.0;

}

/*
*Obtiene los dolares de la cuenta
*@return dollars 
*/

float JugadorNA::getDollars() {
	return dollars;
}
 
/*
*Modifica los dolares de la cuenta
*@param money 
*/

void JugadorNA::setDollars(float money){
	dollars = dollars + money;
}

#endif