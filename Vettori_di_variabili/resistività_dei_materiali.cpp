#include <iostream>
#include <string>

using namespace std;

int main()
{
    string materiale;
    float ro = 0;

    float lunghezza;
    float sezione;

    float resistivita[14] = { 0.0164, 0.0175, 0.024, 0.029, 0.055, 0.12, 0.1, 0.206, 0.4, 0.5, 0.955, 30, 5e5, 25e6 };
    string  materiali[14] = { "argento", "rame", "oro", "alluminio", "tungsteno", "stagno", "ferro", "piombo", "manganina", "costantana", "mercurio", "carbone", "germanio", "silicio" };

    cout << "Inserire il materiale del filo" << endl;
    cin >> materiale;

    for (int i = 0; i < 14; i++)
        if (materiale == materiali[i]) 
            ro = resistivita[i];
        
    cout << ro << " Ohm per millimetro quadro di sezione, per metro di lunghezza\n";

    cout << "Inserire la lunghezza del filo in metri\n";
    cin >> lunghezza;

    cout << "Inserire la sezione del filo in mm quadri\n";
    cin >> sezione;

    cout << "Resistenza del filo: " << (ro * lunghezza) / sezione <<  "Ohm";


    return 0; 

}

