#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero;
	
	cout << "Digite um número INTEIRO. \n";
	cin >> numero;
	
	while ( numero < 1 || numero > 5 ) {
		
		cout << "Digite um número INTEIRO. \n";
		cin >> numero;
		
	}

system("pause");
return 0;
}
