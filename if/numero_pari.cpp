#include <iostream>
using namespace std;



int main() {

  int numero;
  
	cout<<"Inserire un numero:\n";
	cin>>numero;

	/******************************************************
	 * si controlla se il numero è pari                   *
	 *                                                    *
	 * se la divisione per 2 ha resto 0 allora è pari     *
	 *                                                    *
	 ******************************************************/

	if((numero % 2) ==0 )
		cout<<"Il numumero inserito è pari\n";
	else
		cout<<"Il numumero inserito è dispari\n";


}
