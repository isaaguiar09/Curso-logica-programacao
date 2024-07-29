#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero;
	
	cout << "Digite um número INTEIRO \n \n";
	cin >> numero;
	
	if ( numero > 0 ) {
		
		cout << "\n \n --------------------- RESULTADO ------------------------------ \n \n";
		cout << "O número digitado é POSITIVO! \n \n";
		
	} else if ( numero < 0 ) {
		
		cout << "\n \n --------------------- RESULTADO ------------------------------ \n \n";
		cout << "O número digitado é NEGATIVO! \n \n";
		
	}
	
system("pause");
return 0;
}


	
