#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1, numero2, numero3;
	double resultado1, resultado2, resultado3;
	
	cout << "Digite o primeiro número. \n";
	cin >> numero1;
	
	cout << "Digite o segundo número. \n";
	cin >> numero2;
	
	cout << "Digite o terceiro número. \n";
	cin >> numero3;
	
	resultado1 = (numero1 * 2) + (numero2 / 2);
	resultado2 = (numero1 * 3) + numero3;
	resultado3 = numero3 * 3;
	
	cout << " \n \n ------------------- Resultado -------------------------- \n \n";
	
	cout << " 1º O dobro do primeiro número mais a metade do segundo número: " << resultado1 << "\n \n";
	cout << " 2º O triplo do primeiro número mais o terceiro número: " << resultado2 << "\n \n";
	cout << " 3º O terceiro número multiplicado por 2: " << resultado3 << "\n \n";
	
	
	
	
	
	
	
system("pause");
return 0;
}
