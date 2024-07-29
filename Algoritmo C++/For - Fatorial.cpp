#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, contador, fatorial;
	
	fatorial = 1;
	
	cout << "Digite um número inteiro para saber seu fatorial. \n";
	cin >> numero;
	
	for ( contador = numero; contador >= 1; contador-- ) {
		
		fatorial *= contador;
		
	}
	
		cout <<  "O fatorial de " << numero << " é " << fatorial << "\n\n";0pl.
	
system("pause");
return 0;
}

