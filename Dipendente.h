#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;


#pragma once
class Dipendente
{
protected: // inserisco le proprietà come protected, in modo che possano essere ereditate, ma che rimangano non dirttamente accessibili nel main
	string nome;
	string cognome;
	string cf;
	int stipendio;

public:// i metodi invece saranno pubblici, perchè voglio che siano utilizzabili nel main
	Dipendente(string nNome, string nCognome, string nCf, int nStipendio) : nome(nNome), cognome(nCognome), cf(nCf), stipendio(nStipendio) {};

	//setter
	void setNome(string nNome);
	void setCognome(string nCognome);
	void setCf(string nCf);
	bool setStipendio(string nStipendio);
	//getter:
	string getNome();
	string getCognome();
	string getCf();
	int getStipendio();

	//metodo generico che utilizzerò per dimostrare il principio di sovrapposizione dei metodi:
	void svolgiMansione();
	//altro metodo che utilizzo per dimostrare la sovrapposizione dei metodi:
	void visualizzaInfo();
};

