#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1, numero2, contador;
	
	cout << "Digite o primeiro número \n";
	cin >> numero1;
	
	cout << "Digite o segundo número \n";
	cin >> numero2;

	for ( contador = numero1; contador <=  numero2; contador++ ) {
		
		cout << contador << " ";
		
	}
	
system("pause");
return 0;
}


