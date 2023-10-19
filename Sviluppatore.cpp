#include "Sviluppatore.h"

void Sviluppatore::setLinguaggio(string newLing)
{
	linguaggioPreferito = newLing;
	cout << endl << "voce 'Linguaggio preferito' modificata con successo" << endl;
}

void Sviluppatore::setSpec(string newSpec)
{
	specializzazione = newSpec;
	cout << endl << "voce 'Specializzazione' modificata con successo" << endl;
}

void Sviluppatore::svolgiMansione()
{
	cout << endl << "Sto scrivendo del codice in " << getLinguaggio() << endl; //l'oggetto istanziato dalla sottoclasse utilizzerà il metodo aggiornato;
}

string Sviluppatore::getLinguaggio()
{
	return linguaggioPreferito;
}

string Sviluppatore::getSpec()
{
	return specializzazione;
}

void Sviluppatore::visualizzaInfo()
{
	cout << endl << "nome: " << getNome() << endl;
	cout << endl << "cognome: " << getCognome() << endl;
	cout << endl << "cf: " << getCf() << endl;
	cout << endl << "stipendio: " << getStipendio() << endl;
	cout << endl << "Linguaggio di Programmazione preferito: " << getLinguaggio() << endl;
	cout << endl << "specializzazione: : " << getSpec() << endl;
}
