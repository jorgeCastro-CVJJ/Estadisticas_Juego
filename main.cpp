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
  float fwinrate;
  int idmg_medio;
  int ipartidas;
  int iclasificacion;

  public:
  // metodos que tendrá el objeto
  Jugador();
  Jugador (string nickname, float fwinrate, int idmg_medio, int ipartidas);

  string getNickname() const;
  float getWinrate() const;
  int getpartidas() const;
  int getDmg_medio() const;
  virtual int calcular_iclasificacion()=0; 
  string printInfo() const;
};

/**
* Constructor por default
*
*parametros
*return Objeto Jugador
*/


Jugador::Jugador(){
  nickname = "";
  fwinrate = 0;
  idmg_medio = 0;
  ipartidas = 0;
  iclasificacion = 0;

}

/**
* Constructor recibe valores
*parametros string nickname, float fwinrate, int idmg_medio, int ipartidas
* return
*/

Jugador::Jugador(string nickname, float fwinrate, int idmg_medio, int ipartidas){

  nickname = apodo;
  fwinrate = win;
  idmg_medio = danno;
  ipartidas = partidas;

}

/* 
Getter del nickname
*/

string Jugador::getNickname() const{
  return nickname;
}

float Jugador::getWinrate() const{
  return win;
}

int Jugador::getDmg_medio() const{
  return danno;
}


int Jugador::getpartidas() const{
  return partidas;
}

/*
Mostar la informacion del jugador en pantalla
*/

string Jugador::printInfo() const{

  stringstream pub;
  pub << "el nombre del jugador es " nickname << " tiene un total de " << partidas << " con un winrate de " << win << " y un daño medio de " << danno << "\n";
  
  return pub.str();
}




