#include <iostream>
using namespace std;

int main()
{
    int numero = 0;
    int i = 1;

    cout << "Inserire un numero: \n";
    cin >> numero;

    cout << "Stampa della tabellina del " <<numero<< endl;

    while (i <= 10)
    {
        cout << i * numero<<endl;
        i++;
    }





   
}
