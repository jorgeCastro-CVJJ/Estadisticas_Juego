/*
* Proyecto Estadisticas_Juego
* Jorge de Jesús Castro Vázquez
* A01707735
* ITESM, Campus Querétaro
*/

/*
* Descripcion
* Este es un proyecto para la clase de Pensamiento Computacional Orientado a objetos
* Es un programa que despliega las estadisticas de los jugadores según sea su servidor (EU / NA), además * de tener la opcion de agregar dinero. 
* El codigo los divide por Jugadores Profesional o Jugadores Promedio
*/

#include <iostream>
#include "Jugador.h"
#include "JugadorEU.h"
#include "JugadorNA.h"
#include "Profesional.h"
#include "Promedio.h"


using namespace std;
// Se declaran variables globales
JugadorNA listaNA[5];
int tam = 0;
Profesional profesional;
Promedio promedio;

//Declara los jugadores que hay en NA. Objetos de la clase JugadorNA

JugadorNA moni("P_I_E_B_S_A_T",65.7,1946,25468);
JugadorNA white("_Whitexican",62.41,1804,50395);
JugadorNA fishy("_Fishy",67.45,2341,456);
JugadorNA tjbleu("TJFbleu",56.13,1445,5285);
JugadorNA loona("_Loona",52.79,1453,4751);

//Declara los jugadores que hay en EU. Objetos de la clase JugadorEU

JugadorEU pistol("PistolStar",71.81,1906,49784);
JugadorEU zvero("_Zvero",71.32,2140,35762);
JugadorEU alex("alexxnavee",58.07,1240,3782);
JugadorEU ineear("iNeear",59.36,1640,6892);
JugadorEU assasin("assasinxdddd",55.61,1600,7402);
JugadorEU dmg("Dark_Magician_Girl",84.04,1230,9256);

//Se declaran funciones que se llaman en el main
void menu();
void servidorNA();
void servidorEU();
void listaJugadoresNA();
void listaJugadoresEU();
void desplegarNA();
void desplegarEU();

int main(){
	int opcion;
	bool continua;
	continua = true;
	while (continua) 
	{
		menu(); //El Usuario selecciona una opcion para que el codigo realice la accion correspondiente
		cout << "\n Opcion: "; cin >> opcion;

		if(opcion == 1) 
		{
			cout << "1. NA\n" << "2. EU\n"; // Se le pregunta al usuario en que servidor está para poder desplegar la informacion correspondente
			int server;
			cout << "¿En qué servidor te encuentras?";
			cout << "\n server: "; cin >> server;
			
			switch(server) 						// Despliega las estadísticas generales de los jugadores en pantalla, permitiendoles al usuario decidir cual cuenta / jugador quiere visualizar
			{
				case 1: 
					listaJugadoresNA();
					int selec;
					cout << "\n¿Qué jugador quieres visualizar?";
					cout << "\n Jugador: "; cin >> selec;
					switch(selec)
					{
						case 1:
							cout << moni.toString();
							break;
						case 2:
							cout << white.toString();
							break;
						case 3:
							cout << fishy.toString();
							break;
						case 4: 
							cout << tjbleu.toString();
							break;
						case 5:
							cout << loona.toString();
							break;
					}
					break;
				case 2:
					listaJugadoresEU();
					cout << "\n¿Qué jugador quieres visualizar?";
					cout << "\n Jugador: "; cin >> selec;
					switch(selec)
					{
						case 1:
							cout << pistol.toString();
							break;
						case 2:
							cout << zvero.toString();
							break;
						case 3:
							cout << alex.toString();
							break;
						case 4: 
							cout << assasin.toString();
							break;
						case 5:
							cout << dmg.toString();
							break;
					}
			}						
		}

		else if (opcion == 2)
		{
			cout << "1. NA\n" << "2. EU\n";// Se le pregunta al usuario en que servidor está para poder desplegar la informacion correspondente
			int server;
			cout << "¿En qué servidor te encuentras?";
			cout << "\n server: "; cin >> server;

			switch(server)      // Se depliega la cuenta / jugador según el servidor y permite al usuario agregar dinero / fondos a la cuenta. Según sea dolares $ o euros 
			{
				case 1:  
					listaJugadoresNA();
								
					int sel;
					cout << "¿A que cuenta deseas depositar?";
					cout << "\n Cuenta: "; cin >> sel;
					float mon;
					cout << "¿Cuanto deseas depositar?";
					cout << "\n Deposito: "; cin >> mon;

					switch(sel)
					{
						case 1:
							moni.setDollars(mon);
							cout << "\nEl deposito se ha realizado con exito\n";
							break;
						case 2:
							white.setDollars(mon);
							cout << "\nEl deposito se ha realizado con exito\n";
							break;
						case 3:
							fishy.setDollars(mon);
							cout << "\nEl deposito se ha realizado con exito\n";
							break;
						case 4: 
							tjbleu.setDollars(mon);
							cout << "\nEl deposito se ha realizado con exito\n";
							break;
						case 5:
							loona.setDollars(mon);
							cout << "\nEl deposito se ha realizado con exito\n";
							break;
					}
					break;
				case 2:
					listaJugadoresEU();
							
					int selec;
					cout << "¿A que cuenta deseas depositar?";
					cout << "\n Cuenta: "; cin >> selec;
					float money;
					cout << "¿Cuanto deseas depositar?";
					cout << "\n Deposito: "; cin >> money;
								
					switch(selec)
					{
						case 1:
						 pistol.setEuros(money);
						 cout << "\nEl deposito se ha realizado con exito\n";
						 break;
						case 2:
						 zvero.setEuros(money);
						 cout << "\nEl deposito se ha realizado con exito\n";	
						 break;
						case 3:
						 alex.setEuros(money);
						 cout << "\nEl deposito se ha realizado con exito\n";
						 break;
						case 4: 
						 assasin.setEuros(money);
						 cout << "\nEl deposito se ha realizado con exito\n";
						 break;
						case 5:
						 dmg.setEuros(money);
						 cout << "\nEl deposito se ha realizado con exito\n";
						 break;
					}
					break;
			}
		}	
							
		else if(opcion==3)  // Visualiza la cantidad de dinero que tiene la cuenta seleccionada
		{
			cout << "1. NA\n" << "2. EU\n";
			int server;
			cout << "¿En qué servidor te encuentras?";
			cout << "\n server: "; cin >> server;
			switch(server) 
			{
				case 1:
				 listaJugadoresNA();
				 int selec;
				 cout << "¿Qué cuenta quieres visualizar?";
				 cout << "\n Cuenta: "; cin >> selec;
				 switch(selec)
				 {
					case 1:
					 cout << " Dinero disponible: " << moni.getDollars() << "$ USD" <<endl;
					 break;
					case 2:
					 cout << " Dinero disponible: " << white.getDollars() << "$ USD" <<endl;
					 break;
					case 3:
					 cout << " Dinero disponible: " << fishy.getDollars() << "$ USD" << endl;
					 break;
					case 4: 
					 cout << " Dinero disponible: " << tjbleu.getDollars() << "$ USD" << endl;
					 break;
					case 5:
					 cout << " Dinero disponible: " << loona.getDollars() << "$ USD" << endl;
					 break;
				 }
				 break;
				case 2:
				 listaJugadoresEU();
				 cout << "¿Quécuenta quieres visualizar?";
				 cout << "\n Cuenta: "; cin >> selec;
				 switch(selec)
				 {
					case 1:
					 cout << " Dinero disponible: " << pistol.getEuros() << "€ EUR" <<endl;
					 break;
					case 2:
					 cout << " Dinero disponible: " << zvero.getEuros() << "€ EUR" <<endl;
					 break;
					case 3:
					 cout << " Dinero disponible: " << alex.getEuros() << "€ EUR" <<endl;
					 break;
					case 4: 
					 cout << " Dinero disponible: " << assasin.getEuros() << "€ EUR" <<endl;
					 break;
					case 5:
					 cout << " Dinero disponible: " << dmg.getEuros() << "€ EUR" <<endl;
					 break;
				 }
			}
		}

		else if (opcion == 4) // Despliega en la pantalla la lista de jugadoresNA divididos entre Profesionales y Promedio
		{
			desplegarNA();
		}

		else if (opcion == 5) // Despliega en la pantalla la lista de jugadoresEU divididos entre Profesionales y Promedio
		{
			desplegarEU();
		}

		else if (opcion == 6) //Permite al usuario salir del programa
		{
			continua = false;
			cout << " Adios" <<endl;
		}
		
		else // Si el usuario ingresa una opcion no valida aparece este error. 
		{
			cout << "Eror 404, escoge una opcion valida." << endl;
			
		}
				
	}
	return 0;
}


/*
*Se crea el diseño del menu que aparece en pantalla
*/

void menu(){
	cout << "\n         Menu de opciones \n";
	cout << "**************************************\n";
	cout << "1. Visualizar estadísticas de jugador" << endl;
	cout << "2. Agregar dinero a la cuenta" << endl;
	cout << "3. Visualizar dinero en la cuenta" << endl;
	cout << "4. Desplegar lista de jugadores en NA" << endl;
	cout << "5. Desplegar lista de jugadores en EU" << endl;
	cout << "6. Salir" << endl;

}

/*
*Despliega el nombre de los jugadores en la pantalla enumerdos NA
*/

void listaJugadoresNA(){
	JugadorNA listaNA[5];
	listaNA[0] = moni;
	listaNA[1] = white;
	listaNA[2] = fishy;
	listaNA[3] = tjbleu;
	listaNA[4] = loona;
	for (int i=0; i < 5; i++)
	{
		cout << "\n";
		cout <<  i+1 << ". " << listaNA[i].getNickname() << "\n";
	}
	
}

/*
*Despliega el nombre de los jugadores en la pantalla enumerado EU
*/

void listaJugadoresEU(){
	JugadorEU listaEU[5];
	listaEU[0] = pistol;
	listaEU[1] = zvero;
	listaEU[2] = alex;
	listaEU[3] = assasin;
	listaEU[4] = dmg;
	for (int i=0; i < 5; i++)
	{
		cout << "\n";
		cout <<  i+1 << ". " << listaEU[i].getNickname() << "\n";	
	}
}

/*
*Despliega a los jugadores de NA divididos por las clases Profesional o Promedio
*/

void desplegarNA() {
	JugadorNA listaNA[5];
	listaNA[0] = moni;
	listaNA[1] = white;
	listaNA[2] = fishy;
	listaNA[3] = tjbleu;
	listaNA[4] = loona;
	for (int i=0; i < 5; i++){
		if (listaNA[i].getWinrate() >= 50.0 && listaNA[i].getWinrate() <= 60.0){
			promedio.setJugadorNA(listaNA[i]);

		} 
		else if(listaNA[i].getWinrate() > 60.0) {
			profesional.setJugadorNA(listaNA[i]);
		}
	} 
	cout << "**** Lista de Jugadores Profesionales NA **** \n";
	profesional.getJugadoresNA();
	cout << "\n **** Lista de Jugadores Promedio NA **** \n";
	promedio.getJugadoresNA();
}

/*
*Despliega a los jugadores de EU divididos por las clases Profesional o Promedio
*/

void desplegarEU() {
	JugadorEU listaEU[5];
	listaEU[0] = pistol;
	listaEU[1] = zvero;
	listaEU[2] = alex;
	listaEU[3] = assasin;
	listaEU[4] = dmg;
	for (int i=0; i < 5; i++){
		if (listaEU[i].getWinrate() >= 50.0 && listaEU[i].getWinrate() <= 60.0){
			promedio.setJugadorEU(listaEU[i]);

		} 
		else if(listaEU[i].getWinrate() > 60.0) {
			profesional.setJugadorEU(listaEU[i]);
		}
	} 
	cout << "**** Lista de Jugadores Profesionales EU **** \n";
	profesional.getJugadoresEU();
	cout << "\n **** Lista de Jugadores Promedio EU **** \n";
	promedio.getJugadoresEU();
}

