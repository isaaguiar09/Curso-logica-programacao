#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, quadrado;
	
		cout << "Digite um n�mero INTEIRO e 0 para encerrar.\n";
		cin >> numero;
		
	while( numero != 0 ) {
		
		quadrado = numero * 2;
		cout << "O quadrado do n�mero: " << quadrado << "\n\n";
		
		cout << "Digite um n�mero INTEIRO e 0 para encerrar.\n";
		cin >> numero;
	}
		
		
system("pause");
return 0;
}
