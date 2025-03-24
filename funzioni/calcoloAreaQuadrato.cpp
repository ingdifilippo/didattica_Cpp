#include <iostream>
using namespace std;

// La funzione accetta dal chiamante un parametro intero in ingresso (il lato) e resituisce un paramtro al chiamante (l'area)
int calcoloAreaQuadrato(int l) {
  return l * l;
}

int main() {
  int lato = 0;
  int risultato = 0;

  cout << "Inerire il lato del quadrato"<<endl;
  cin >> lato;
  
  risultato = calcoloAreaQuadrato(lato);

  cout << "Il quadrato ha area " << risultato << endl;

  return 0;
}
