#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1;
	
	cout << " \n --------------- Valor Inicial --------------- \n \n";
	numero1 = 10;
	cout << "Número : " << numero1 << "\n \n";
	
	cout << "\n --------------- Multiplicado por 2 --------------- \n \n";
	numero1 *= 2;
	cout << "Número : " << numero1 << "\n \n";
	
	cout << "\n --------------- Dividido por 2 --------------- \n \n";
	numero1 /= 2;
	cout << "Número : " << numero1 << "\n \n";
	
	cout << "\n --------------- Pós fixado --------------- \n \n";
	numero1 = 100;
	cout << "Número : " << numero1 << "\n \n";
	cout << "Número : " << numero1++ << "\n \n";
	cout << "Número : " << numero1 << "\n \n";
	
	cout << "\n --------------- Pré fixado --------------- \n \n";
	numero1 = 100;
	cout << "Número : " << numero1 << "\n \n";
	cout << "Número : " << ++numero1 << "\n \n";
	
system("pause");
return 0;
}
