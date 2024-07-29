#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int contador;
	
	contador = 1;
	
	// 
	cout << " \n \n --------------------- Ex 1 -------------------------- \n \n";
	
	while( contador < 11 ) {
		
		cout << "Número: " << contador  << "\n \n";
		
		contador++;
		
	}
	
	int contador2;
	
	contador2 = 10;
	
	//
	cout << " \n \n --------------------- Ex 2 -------------------------- \n \n";
	
	while( contador2 >= 0 ) {
		
		cout << "Número: " << contador2 << "\n \n";
		
		contador2--;
		
	}
	
	int contador3;
	double media, nota, soma;
	
	soma = 0;
	contador3 = 1;
	
	//
	cout << " \n \n --------------------- Ex 3 -------------------------- \n \n";
	
	while( contador3 <= 4 ) {
		
		cout << "Digite a nota " << contador3 << ". \n \n";
		cin >> nota;
		
		contador3++;
		soma+=nota;
		
	}
	
	cout << "\n\n";
	media = soma / 4;
	cout << "  A média é " << media << ". \n\n";
	
system("pause");
return 0;
}
