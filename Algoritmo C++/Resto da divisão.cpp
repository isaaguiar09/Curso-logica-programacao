#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, resto;
	
	numero = 10;
	resto = numero % 2;
	
	cout << " O resto da divisão é: " << resto << "\n \n";
	
	int numero1, resto1;
	
	numero = 100;
	resto = numero % 3;
	
	
system("pause");
return 0;
}
