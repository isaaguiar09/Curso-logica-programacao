#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	string vetor[5];
	int cont;
	
	for ( cont = 0; cont < 5; cont++) {
		
		cout << "Digite o número da posição " << cont << "\n";
		cin >> vetor[cont];
		
	}
	
	for ( cont = 4; cont >= 0; cont--) {
		
		cout << "\n\n";
		
		cout << vetor[cont] << "\n";
		
	}
	
system("pause");
return 0;
}
