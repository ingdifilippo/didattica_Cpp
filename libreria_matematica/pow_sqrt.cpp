#include <iostream>
#include <cmath> //Libreria matematica 

using namespace std;

int main() {

// Radice quadrata in un numero:

  float x = 4;
  float radice;

  radice = sqrt(x); //funzione square root 

  cout << "Radice di "<< x << " = "<< radice<<endl;

  // Potenza di un numero:

  float base = 2;
  float esponente = 4;
  float potenza;

  potenza = pow(base, esponente); //funzione power
  cout <<  base<<" elevato a "<< esponente << " = " << potenza;

  
}
