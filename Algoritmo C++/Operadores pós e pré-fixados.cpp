#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1;
	
	cout << " \n --------------- Valor Inicial --------------- \n \n";
	numero1 = 10;
	cout << "N�mero : " << numero1 << "\n \n";
	
	cout << "\n --------------- Multiplicado por 2 --------------- \n \n";
	numero1 *= 2;
	cout << "N�mero : " << numero1 << "\n \n";
	
	cout << "\n --------------- Dividido por 2 --------------- \n \n";
	numero1 /= 2;
	cout << "N�mero : " << numero1 << "\n \n";
	
	cout << "\n --------------- P�s fixado --------------- \n \n";
	numero1 = 100;
	cout << "N�mero : " << numero1 << "\n \n";
	cout << "N�mero : " << numero1++ << "\n \n";
	cout << "N�mero : " << numero1 << "\n \n";
	
	cout << "\n --------------- Pr� fixado --------------- \n \n";
	numero1 = 100;
	cout << "N�mero : " << numero1 << "\n \n";
	cout << "N�mero : " << ++numero1 << "\n \n";
	
system("pause");
return 0;
}
