#include <iostream>
#include <sstream>
#include <string>

#ifndef JUGADOR_H_
#define JUGADOR_H_

using namespace std;

/*
 *Se declara Clase Jugador que maneja dos (2) clases hijas (JugadorNA y JugadorEU)
 */

class Jugador{
	protected: 
		//Atributos de Jugador que se heredan ua clases hijas
		string nickname;
		float winrate;
		int danioMedio;
		int partidas; 
		int numQuejas;
		
	public:
			//Constructores por default y con variables
			Jugador(){};
			Jugador(string,float,int,int,int);

			//Métodos de la clase que se heredan a clases hijas
			//Getters de la clase
			string getNickname();

			float getWinrate();

			int getDaniomedio();

			int getPartidas();

			int getNumquejas();

			//Setters de la clase

			void setNickname(string);

			void setWinrate(float);

			void setDaniomedio(int);
			
			void setPartidas(int);
			
			void setNumquejas();

			//Metodo par imprimir la informacion del jugador
			string toString();
};

/*
*Constructor de la clase
*@param string n: nombre del Jugador
*@param float wr: indice de victorias del jugador 
*@param int danio: daño del jugador promedio por partida
*@param int p: numero de partidas jugadas
*/

Jugador::Jugador(string n, float wr, int danio, int p,int jas) {
	nickname = n;
	winrate = wr;
	danioMedio = danio;
	partidas = p;
	numQuejas = jas;
}

/////////// Getters /////////// 

/*
*Obtiene el nombre del jugador
*@return nickname: nombre del jugador
*/

string Jugador::getNickname() {
	return nickname;
}

/*
*Obtiene el indice de victorias del jugador
*@return winrate
*/

float Jugador::getWinrate() {
	return winrate;
} 	 

/*
*Obtiene el daño promedio del jugador
*@return danioMedio
*/

int Jugador::getDaniomedio() {
	return danioMedio;
}

/*
*Obtiene el numero de partidas del jugador
*@return partidas
*/

int Jugador::getPartidas() {
	return partidas;
}


/////////// Setters /////////// 

/*
*Modifica el nickname del jugador
*/

void Jugador::setNickname(string nombre) {
	nickname = nombre;
}

/*
*Modifica el winrate del jugador
*/

void Jugador::setWinrate(float win) {
	winrate = win; // La derecha se la mete a la izquierda
}

/*
*Modifica el danioMedio del jugador
*/

void Jugador::setDaniomedio(int dmedio) {
	danioMedio = dmedio; 
}

/*
*Modifica numero de partidas del jugador
*/

void Jugador::setPartidas(int battles) {
	partidas = battles;
}


/*
*Displiega la informacion del jugador en la pantalla
*/

string Jugador::toString() {

	stringstream aux;
	aux << "\n Jugador: " << nickname << "\n Indice de victorias: " << winrate << "%" << "\n Daño promedio: " << danioMedio << "\n Numero de partidas: " << partidas <<endl; 
	return aux.str(); 
}

#endif