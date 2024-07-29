#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	// ------------------------------------------------------------------
	cout << "\n\n--------------------------------------------\n\n";
	
	int numero;
	
	for ( numero = 1; numero < 11; numero++ ) {
		
		cout << "Número: " << numero << "\n\n";
		
	}
	
	// ------------------------------------------------------------------
	cout << "\n\n--------------------------------------------\n\n";
	
	string nome;
	int contador;
	double nota, media, soma;
	
	soma = 0;
	
	cout <<  "Digite o nome do aluno. \n";
	cin >> nome;
	
	for ( contador = 1; contador <= 4; contador++) {
		
		cout << "Digite a nota " << contador << "\n";
		cin >> nota;
		
		soma += nota;
		
	}
		
		cout << "Nome do aluno: " << nome << "\n";
		cout << "Média: " << soma / 4 << "\n\n";
	
	
system("pause");
return 0;
}

