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
	
	cout << "Digite o 1� n�mero \n";
	cin >> nn1;
	
	cout << "Digite o 2� n�mero \n";
	cin >> nn2;
	
	cout << "Digite o 3� n�mero \n";
	cin >> nn3;
	
	soma = somar3( nn1, nn2, nn3);
	
	cout << "\n\nTotal soma tr�s n�meros: " << soma << "\n";
	
system("pause");
return 0;
}

int somar3( int nn1, int nn2, int nn3) {
	
	return nn1 + nn2 + nn3;
	
}

void somarn ( int n1, int n2) {
	
	cout << "N�mero 1: " << n1 << "\n";
	cout << "N�mero 2: " << n2 << "\n";
	cout << "Total da soma: " << n1 + n2 << "\n\n";
	
}

void funcaomsg() {
 	
 	cout << "Curso de L�gica de Programa��o \n\n";
 	
 }
	
	
	
