#include  <iostream>

#include  <locale.h>

using namespace std;

void funcaomsg();
void somarn ( int n1, int n2);
int somar3( int nn1, int nn2, int nn3);

int main(){
	
	setlocale(LC_ALL, "");
	
	funcaomsg();
	
	somarn( 12, 20);
	
	int nn1, nn2, nn3, soma;
	
	cout << "Digite o 1º número \n";
	cin >> nn1;
	
	cout << "Digite o 2º número \n";
	cin >> nn2;
	
	cout << "Digite o 3º número \n";
	cin >> nn3;
	
	soma = somar3( nn1, nn2, nn3);
	
	cout << "\n\nTotal soma três números: " << soma << "\n";
	
system("pause");
return 0;
}

int somar3( int nn1, int nn2, int nn3) {
	
	return nn1 + nn2 + nn3;
	
}

void somarn ( int n1, int n2) {
	
	cout << "Número 1: " << n1 << "\n";
	cout << "Número 2: " << n2 << "\n";
	cout << "Total da soma: " << n1 + n2 << "\n\n";
	
}

void funcaomsg() {
 	
 	cout << "Curso de Lógica de Programação \n\n";
 	
 }
	
	
	
