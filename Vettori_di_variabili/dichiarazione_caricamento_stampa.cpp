#include <iostream>
using namespace std;


int main(void) {

	//Chiedo al sistema si riservare in memoria un blocco di 5 variabili indicizzate di tipo int

    int voto[5]; // in memoria avremo voto[0], voto[1], voto[2], voto[3], voto[4]

	//inizializzo l'indice discorrimento a 0
	
	int i = 0;

	voto[0] = 6;
	voto[1] = 7;
	voto[2] = 8;
	voto[3] = 5;
	voto[4] = 7;

	//Uso l'indice per scorrere le variabili in memoria 

	while (i < 5) {
		cout << "voto= " << voto[i] << endl;
		i++;
	}

	//il precedente ciclo viene eseguito 5 volte, per i = 0, i = 1. i = 2, i = 3, i = 4 
    //la condizione (i<5) è sempre vera fino a quando i<5
	return 0;
}
