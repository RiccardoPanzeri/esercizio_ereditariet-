#include "Dipendente.h"

void Dipendente::setNome(string nNome)
{
	nome = nNome;
	cout << endl << "Nome modificato con successo" << endl;
}

void Dipendente::setCognome(string nCognome) {
	cognome = nCognome;
	cout << endl << "Cognome modificato con successo" << endl;
}


void Dipendente::setCf(string nCf) {
	cf = nCf;
	cout << endl << "Cf modificato con successo" << endl;
}

bool Dipendente::setStipendio(string nStipendio) {
	char temp;
	for (string::iterator it = nStipendio.begin(); it != nStipendio.end(); it++) {
		temp = *it;
		if (!isdigit(temp)) {
			cout<<endl<<"Input stipendio non valido."<<endl;
			return false;
		}
	}
	stipendio = atoi(nStipendio.c_str());
	cout << endl << "Voce 'stipendio' modificata con successo." << endl;
	return true;

}

string Dipendente::getNome()
{
	return nome;
}

void Dipendente::svolgiMansione()
{
	cout << endl<< "Sto Svolgendo una mansione generica." << endl;
}

void Dipendente::visualizzaInfo()
{
	cout << endl << "nome: " << getNome() << endl;
	cout << endl << "cognome: " << getCognome() << endl;
	cout << endl << "cf: " << getCf() << endl;
	cout << endl << "stipendio: " << getStipendio() << endl;
}

string Dipendente::getCognome()
{
	return cognome;
}

string Dipendente::getCf()
{
	return cf;
}

int Dipendente::getStipendio() {
	return stipendio;
}