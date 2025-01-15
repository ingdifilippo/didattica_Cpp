#include <iostream>
using namespace std;

int main() {
	const int dim = 4;
	int temperature[dim] = {0,0,0,0};
	int i = 0;

	for (i = 0; i < dim; i++)
		cout << "temperatura numero " << i << " = " << temperature[i] << endl;


	for (i = 0; i < dim; i++)
	{
		cout << "Inserire la temperatura numero " << i << endl;
		cin >> temperature[i];
	}

	for (i = 0; i < dim; i++)
		cout << "temperatura numero " << i << " = " << temperature[i] << endl;

	return 0;

}
