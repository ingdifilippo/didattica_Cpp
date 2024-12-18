#include <iostream>
using namespace std;


int main(void) {

	//Chiedo al sistema si riservare in memoria un blocco di 5 variabili indicizzate di tipo int

	float temperatura[5] = {12.5, 11.3, 11.7, 10.9, 12.4};

	//inizializzo l'indice discorrimento a 0
	
	int i = 0;

	//Uso l'indice per inserire i dati  nelle variabili in memoria 

	while (i < 5) {
		cout << "Inserire la temperatura: ";
		cin>> temperatura[i];
		i++;
	}


	//Uso l'indice per scorrere le variabili in memoria 
	i = 0;

	while (i < 5) {
		cout << "temperatura= " << temperatura[i] << endl;
		i++;
	}

	//il precedente ciclo viene eseguito 5 volte, per i = 0, i = 1. i = 2, i = 3, i = 4 
    //la condizione (i<5) è sempre vera fino a quando i<5
	return 0;
}
