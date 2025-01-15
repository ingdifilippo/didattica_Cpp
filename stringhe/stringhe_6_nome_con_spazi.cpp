#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nome;

	cout << "Inserisci nome e cognome: ";
  //L'istruzione getline legge l'input stream fino a \n oppure se incontra il carattere EOF, ossia il carattere di fine file
	getline(cin, nome);
	cout << nome;

	return 0;
}
