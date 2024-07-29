#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, quantidade, soma;
	
	quantidade = 0;
	soma = 0;
	
	cout << "Digite um número INTEIRO maior que 0. \n";
	cin >> numero;

	while ( numero < 0 || numero > 0) {
		
		quantidade++;
		soma = soma + numero;
		
		cout << "Digite um número INTEIRO maior que 0. \n";
	    cin >> numero;
		
		
	}
	
	cout << " \n \n---------------------------------------------------------- \n \n";
	
	cout << "Quantidade de números digitados: "  << quantidade << "\n";
	
	cout << "Média dos números digitados: " << soma / quantidade << "\n \n";
	
	
	
system("pause");
return 0;
}
