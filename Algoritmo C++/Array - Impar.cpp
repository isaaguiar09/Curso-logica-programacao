#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int vetor[5], vetorimpar[5];
	int cont, pos;
	
	for ( pos = 0; pos < 5; pos++) {
		
		cout << "Digite o número da posição " << pos << "\n";
		cin >> vetor[pos];
		
		if ( vetor[pos] % 2 != 0) {
			
			vetorimpar[cont] = vetor[pos];
			cont++;
			
		}
		
	}
	
	for ( pos = 0; pos < cont;  pos++) {
		
		cout << vetorimpar[pos] << "\n";
		
	}
	
	
system("pause");
return 0;
}

