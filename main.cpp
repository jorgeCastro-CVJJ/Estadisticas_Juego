/*
 * Proyecto Estadisticas_Juego
 * Jorge de Jesús Castro Vázquez
 * A01707735
 * 
 */

/**
 * Descripcion
 * Este es un proyecto para la clase de Pensamiento *  Computacional Orientado a objetos
 * Es un programa que captura los datos de un jugador y permite calcular: winrate, daño medio, numero de partidas jugadas y clasificacion
*/


#include <iostream>
#include <sstream>

using namespace std;

//Declarar la clase de jugador

class Jugador{

  private:
  //variables
  string nickname;
  float winrate;
  int dmg_medio;
  int partidas;

  public:
  // metodos que tendrá el objeto
  Jugador();
  Jugador (string nickname, float fwinrate, int idmg_medio, int ipartidas);

  string getNickname(); 
  float getWinrate(); 
  int getPartidas();
  int getDmg_medio();
	string toString(); 
};

/**
* Constructor por default
*
*parametros
*return Objeto Jugador
*/


Jugador::Jugador(){
  nickname = "";
  winrate = 0;
  dmg_medio = 0;
  partidas = 0;
}

/**
* Constructor recibe valores
*parametros string nickname, float fwinrate, int idmg_medio, int ipartidas
* return
*/

Jugador::Jugador(string apodo, float win, int danno, int partidas){

  nickname = apodo;
  winrate = win;
  dmg_medio = danno;
  partidas = partidas;

}

/* 
Getter del nickname
*/

string Jugador::getNickname() {
  return nickname;
}

float Jugador::getWinrate() {
  return winrate;
}

int Jugador::getDmg_medio() {
  return dmg_medio;
}


int Jugador::getPartidas(){
  return partidas;
}

/*
Dar la informacion del jugador en la pantalla
*/

string Jugador::toString(){
	stringstream aux;
    aux << "el nickname es " << nickname << ", su winrate es " << winrate << " con un total de " << partidas << " y un daño medio de " << dmg_medio << "\n";
    return aux.str();
}

/* 
* crear obejeto Debajo del Promedio que hereda de Jugador
*/

class DebajoDelPromedio: public Jugador{

	private:
		// Variables del objeto
		int numQuejas;

	public:
		// Metodos del objeto 
		DebajoDelPromedio(); //Constructor
		DebajoDelPromedio(string nickname, float winrate, int dmg_medio, int partidas, int quejas);

		string getNickname();
		float getWinrate();
		int getDmg_medio();
		int getPartidas();
		int getQuejas();
		int quejasBanear(int getQuejas);
		string toString();

};

//Constructor por default

DebajoDelPromedio::DebajoDelPromedio(){

	nickname = "";
  winrate = 0;
  dmg_medio = 0;
  partidas = 0;

}

//Constructor con dando valores

DebajoDelPromedio::DebajoDelPromedio(string apodo, float win, int danno, int partidas, int quejas){
	nickname = apodo;
  winrate = win;
  dmg_medio = danno;
  partidas = partidas;
	numQuejas = quejas;
}

//Getter nickanme

string DebajoDelPromedio::getNickname(){

	return nickname

}

//getter winrate

float DebajoDelPromedio::getWinrate(){

	return winrate

}

//getter dmg_medio

int DebajoDelPromedio::getDmg_medio(){

	return dmg_medio

}

//getter partidas
int DebajoDelPromedio::getPartidas(){

	return partidas

}

//getter numQuejas

int DebajoDelPromedio::getQuejas(){

	return numQuejas

}

//Metodo que dicta la cantidad de quejas restantes para ser baneado

int DebajoDelPromedio::quejasBanear(int getQuejas){

}

//Metodo que almacena en un string los datos del jugador

string DebajoDelPromedio::toString(){
	stringstream aux;
    aux << "el nickname es " << nickname << ", su winrate es " << winrate << " con un total de " << partidas << " y un daño medio de " << dmg_medio << "\n" << " tiene " << numQuejas << "quejas restantes para ser baneado" << "\n";
    return aux.str();
}

//Creacion del objeto Promedio con herencia de Jugador

class Promedio: public Jugador{
	private: 
		
}