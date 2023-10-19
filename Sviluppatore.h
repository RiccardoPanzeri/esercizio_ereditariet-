#include"Dipendente.h"

#pragma once
class Sviluppatore : public Dipendente
{
protected:
	string linguaggioPreferito;
	string specializzazione;

public:
	//per risolvere il problema dei parametri del costruttore della classe padre, basta passare i parametri nel costruttore della sottoclasse e assegnare i nuovi valori al costruttore della classepadre dopo il simbolo ':' del costruttore compatto.
	Sviluppatore(string newNome, string newCognome, string newCf, float newStipendio, string newLinguaggio, string newSpecializzazione) : Dipendente(newNome, newCognome, newCf, newStipendio), linguaggioPreferito(newLinguaggio), specializzazione(newSpecializzazione) {};

	//setter specifici della sottoclasse:
	void setLinguaggio(string newLing);
	void setSpec(string newSpec);
	void svolgiMansione();
	//getter specifici
	string getLinguaggio();
	string getSpec();
	void visualizzaInfo();
};

