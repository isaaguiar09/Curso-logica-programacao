#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero;
	
	numero = 10;
	
	cout << "Número: " << numero << "\n";
	
	cout << "\n -------------- Exemplo 1 -------------- \n \n";  
	numero = numero * -1;
	cout << "Número: " << numero << "\n";
	
	cout << "\n -------------- Exemplo 2 -------------- \n \n";  
	numero = 20;
	cout << "Número: " << -numero << "\n";
	
		cout << "\n -------------- Exemplo 3 -------------- \n \n";  
	numero = 30;
	numero = -numero;
	cout << "Número: " << numero << "\n";
	
	
	
	
	
system("pause");
return 0;
}

