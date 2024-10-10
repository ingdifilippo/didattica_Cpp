#include <iostream>
using namespace std;

int main() {
  //dichiarazione delle variabili 
  float ivaApplicata; // se 20 si applica iva al 20%
  float valoreIva;    //valore da aggiungere
  float costoProdotto;
  float prezzoFinale;
  //Inserimento dati
  cout<<"Inserire il costo del prodotto al netto iva: \n";
  cin>>costoProdotto;
  cout<<"Inserire la percentuale di calcolo IVA: \n";
  cin>>ivaApplicata;
  //Elaborazione dati
  valoreIva = (ivaApplicata/100)*costoProdotto;
  prezzoFinale = costoProdotto + valoreIva;
  //Stampo il prezzo finale
  cout<<"Il prezzo finale è: " <<prezzoFinale;
  
}
