#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero;
	
	cout << "Digite um n�mero INTEIRO \n \n";
	cin >> numero;
	
	if ( numero > 0 ) {
		
		cout << "\n \n --------------------- RESULTADO ------------------------------ \n \n";
		cout << "O n�mero digitado � POSITIVO! \n \n";
		
	} else if ( numero < 0 ) {
		
		cout << "\n \n --------------------- RESULTADO ------------------------------ \n \n";
		cout << "O n�mero digitado � NEGATIVO! \n \n";
		
	}
	
system("pause");
return 0;
}


	
