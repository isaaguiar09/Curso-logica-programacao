#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, contador, par, impar;
	
	par = 0;
	impar = 0;
	
	for ( contador = 1; contador <= 10; contador++)  {
		
		cout << "Escreva o número " << contador << "\n";
		cin >> numero;
		
		if ( numero % 2 == 0 ) {
		
		par++;
		
		} else {
	
		impar++;
			
		}
		
	}
	
	cout << "\n\n--------------------------------------------------\n\n";
	cout << "Quantidade de pares: " << par << "\n";
	cout << "Quantidade de ímpares: " << impar << "\n\n";
	
	
	
system("pause");
return 0;
}

