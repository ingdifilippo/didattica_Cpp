#include <iostream>
using namespace std;

int main() {
    int width, height;
    int x, y;

    cout << "Larghezza schermo: " << endl;
    cin >> width;

    cout << "Altezza schermo: " << endl;
    cin >> height;

    cout << "Posizione oggetto sullo schermo: \n";

    cout << "X: " << endl;
    cin >> x;
    cout << "Y: " << endl;
    cin >> y;

    if ((x < 0 || x > width) || (y < 0 || y > height))
        std::cout << "Posizione oggetto non corretta\n";
    else
        std::cout << "Oggetto posizionabile!\n";
    return 0;

}
