#include <iostream>
using namespace std;

int main()
{
    int scelta = 0;
    int prezzo = 0; //prezzo in centesimi di euro
    int saldo = 0;
    int moneta= 0; //da 10, da 20, da 50, da 100 (1 euro)
    int resto;
    int m;

    while (scelta < 1 || scelta > 3){

        cout << "Scegliere il prodotto da erogare\n\n";
        cout << "1 - Merendina\n";
        cout << "2 - Lattina di coca-cola\n";
        cout << "3 - Sacchetto di patatine\n";

        cin >> scelta;

    }

    switch (scelta) {
    case 1: prezzo = 100;
        break;
    case 2: prezzo = 200;
        break;
    case 3: prezzo = 150;
        break;
    default:
        break;
    }

    while (saldo < prezzo) {
        cout << "Inseriti: " << saldo << endl;
        cout << "Inserire: " << (prezzo - saldo) << endl;
        cin >> moneta; //La gettoniera comunica in centesimi solo quando la moneta è valida ;
        saldo = saldo + moneta;
    }

    cout << "Erogazione prodotto... \n"; //Un motorino viene alimentato per tot secondi e spingere il prodotto
    
    resto = saldo - prezzo;

  
    
    while (resto > 0) {

        m = resto / 100;
        cout << "monete da 1: " << m << endl;
        resto = resto - m * 100;

        m = resto / 50;
        cout << "monete da 50: " << m << endl;
        resto = resto - m * 50;

        m = resto / 20;
        cout << "monete da 20: " << m << endl;
        resto = resto - m * 20;

        m = resto / 10;
        cout << "monete da 10: " << m << endl;
        resto = resto - m * 10;
    }

}

