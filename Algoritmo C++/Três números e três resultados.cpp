#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1, numero2, numero3;
	double resultado1, resultado2, resultado3;
	
	cout << "Digite o primeiro n�mero. \n";
	cin >> numero1;
	
	cout << "Digite o segundo n�mero. \n";
	cin >> numero2;
	
	cout << "Digite o terceiro n�mero. \n";
	cin >> numero3;
	
	resultado1 = (numero1 * 2) + (numero2 / 2);
	resultado2 = (numero1 * 3) + numero3;
	resultado3 = numero3 * 3;
	
	cout << " \n \n ------------------- Resultado -------------------------- \n \n";
	
	cout << " 1� O dobro do primeiro n�mero mais a metade do segundo n�mero: " << resultado1 << "\n \n";
	cout << " 2� O triplo do primeiro n�mero mais o terceiro n�mero: " << resultado2 << "\n \n";
	cout << " 3� O terceiro n�mero multiplicado por 2: " << resultado3 << "\n \n";
	
	
	
	
	
	
	
system("pause");
return 0;
}
