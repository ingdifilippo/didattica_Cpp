include <iostream>
#include <cmath>
using namespace std;

int main() {

  //mi servono due coppie di variabili per le coordinate dei punti 
  float x1,y1;
  float x2,y2;
  float distanza;

  //Dati in ingresso
  cout << "Inserire l'ascissa x1 del punto 1: \n";
  cin>>x1;
  cout << "Inserire l'ordinata y1 del punto 1: \n";
  cin>>y1;
  cout << "Inserire l'ascissa x2 del punto 2: \n";
  cin>>x2;
  cout << "Inserire l'ordinata y2 del punto 2: \n";
  cin>>y2;

  //Determino la distanza dei due punti
  distanza =  sqrt(pow((x2-x1),2)+pow((y2-y1),2)); //ipotenusa del triangolo di cateti (x2-x1) e (y2-y1)

  //Stampo i risultati
  cout<< "Distanza tra i due punti: "<<distanza<<endl;

  //dati di test x1 = 1 y1 = 1 x2 = 2 y2 = 2
  
}
