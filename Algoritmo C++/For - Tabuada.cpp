#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, contador, resultado;
	
	cout << "Digite um n�mero. \n";
	cin >> numero;
	
	if ( numero > 10 || numero < 1) {
		
		cout << "O n�mero n�o est� no intervalo de 1 a 10. \n \n";
		
	}
	
	
	for ( contador = 1; contador <= 10; contador++ ) {
		
		resultado = numero * contador;
		
		cout << numero << " * " << contador << " = " << resultado << "\n";
	}
	
system("pause");
return 0;
}
