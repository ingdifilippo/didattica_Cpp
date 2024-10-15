// Estrazione casuale.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    srand(time(NULL));

    map<int, string> elenco_studenti = {
                                        {1, "VINCENZO PIO ALLOCCA" },
                                        {2, "ANGELO AUGUSTIN BACOSCA" },
                                        {3, "AGOSTINO BAIOCCO"},
                                        {4, "MAURO CALVISI"},
                                        {5, "CLAUDIO CARROZZI"},
                                        {6, "DANIELE CIALFI"},
                                        {7, "LUCA DE PONTE"},
                                        {8, "PATRITIO FEDERICO GAL"},
                                        {9, "SAVERIO MARIA POZZI"},
                                        {10, "LORENZO QUARTA"},
                                        {11, "CHRISTIAN LORENZO RUIZ PADILLA"},
                                        {12, "MATTEO SANTELLA"},
                                        {13, "MATTEO SCIOMENTA"},
                                        {14, "RICCARDO SEBASTIANI"},
                                        {15, "DANIEL SILVA"},
                                        {16, "RAFFAELE TEDESCHINI"},

    }; 


    //Stampo l'elenco degli studenti per controllare che ci siano tutti

    for (int i = 1; i <= elenco_studenti.size(); i++)
    {
        cout << i << " ";
        cout << elenco_studenti[i] << endl;
    }

    //estrazione casuale studente

    int x = rand() % 15 + 1;

    cout << "\nStudente estratto: " << elenco_studenti[x] << endl;

}
