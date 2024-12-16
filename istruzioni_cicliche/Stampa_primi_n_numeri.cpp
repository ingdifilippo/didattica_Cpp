#include <iostream>
using namespace std;

int main()
{
    int numero = 0;
    int i = 1;

//L'utente decide quanti numeri stampare
    
  cout <<"Inserire un numero: "<< endl;
  cin >> numero;

  while (i <= numero)
  {
    cout << "i= "<< i << endl;
    i++;
  }


    return 0;
}
