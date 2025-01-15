#include <iostream>
using namespace std;

int main() {
	string nome;

  //cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if you type many words):
  //cin  considera lo spazio come un carattere di terminazione dell'input, il che vuol dire che non potete inerire nome e cognome separati da spazi
	 
	cout << "Inserisci il tuo nome: ";
	cin >> nome;
	
	cout << nome;

}





