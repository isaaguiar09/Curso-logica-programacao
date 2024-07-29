#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, soma;
	
	cout << "Digite o primeiro número: \n";
	cin >> numero1;
	
	cout << "Digite o segundo número. \n";
	cin >> numero2;
	
	soma = numero1 + numero2;
	
	cout << "------------------------------------------- \n";
	cout << "A soma dos números é " << soma << "\n";
	cout << "------------------------------------------- \n";
	
	system("pause");
	return 0;
}
