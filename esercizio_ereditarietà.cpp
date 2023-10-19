#include "Dipendente.h"
#include "Sviluppatore.h"


int main()
{
	//istanzio un oggetto dalla classe padre:
	Dipendente dipGenerico("tizio", "caio", "xxxxyyyyzzzz", 1200); //il costruttore della classe pdre ha dei parametri e ciò andrà gestito nel costruttore della classe figlio;
	//istanzio un oggetto dalla classe figlio:
	Sviluppatore sviluppatore1("Nome", "A Caso", "xxxyyyzzz123p", 4000, "C++", "Back End"); //il costruttore della classe figlio viene chiamato per primo e si occupa di gestire il costruttore della classe padre, richiamato successivamente;
	//utilizzo i metodi della classe padre:
	cout << endl << "Mansione svolta dal dipendente generico: " << endl;
	dipGenerico.svolgiMansione();
	//utilizzo lo stesso metodo, che è stato ereditato dalla classe figlio, ma adeguatamente aggiornato:
	cout << endl << "Mansione svolta dallo sviluppatore: " << endl;
	sviluppatore1.svolgiMansione();
	
	//Ora dimostro ancora una volta il principio di sovrapposizione dei metodi, richiamando lo stesso metodo per i due oggetti:
	cout << endl << "Ecco le informazioni del dipendente generico:" << endl;
	dipGenerico.visualizzaInfo();
	cout << endl << "Ecco le informazioni dello sviluppatore:" << endl;
	sviluppatore1.visualizzaInfo();




	return 0;
}



