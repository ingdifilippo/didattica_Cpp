#include <iostream>
using namespace std;

float calcoloAreaCerchio();
float calcoloAreaRettangolo();
float calcoloAreaTriangolo();


int main()
{   
    int scelta = 0;
    float area;

    while (scelta < 1 || scelta > 3) {

        cout << "Calcolo dell'area di una figura piana\n\n";
        cout << "1 - Cerchio\n";
        cout << "2 - Rettangolo\n";
        cout << "3 - Triangolo\n\n";

        cin >> scelta;

    }

    switch (scelta) {
    case 1: 
        area = calcoloAreaCerchio();
        break;
    case 2: 
        area = calcoloAreaRettangolo();
        break;
    case 3: 
        area = calcoloAreaTriangolo();
        break;
    default:
        break;
    }

    cout << area << endl;;
}





float calcoloAreaCerchio() {
    float raggio;
    cout << "inserire il raggio del cerchio\n";
    cin >> raggio;
    return 3.14 * raggio*raggio;
}


float calcoloAreaRettangolo() {
    float base = 0;
    float altezza = 0;
    cout << "inserire la base del rettangolo\n";
    cin >> base;
    cout << "inserire l'altezza del rettangolo\n";
    cin >> altezza;

    return base * altezza;

}




float calcoloAreaTriangolo() {
    float base = 0;
    float altezza = 0;
    cout << "inserire la base del triangolo\n";
    cin >> base;
    cout << "inserire l'altezza del triangolo\n";
    cin >> altezza;

    return (base * altezza)/2;

}
