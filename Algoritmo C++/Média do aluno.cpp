#include  <iostream>

#include  <locale.h>


double media;

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	double nota1, nota2, nota3, nota4;
	string nome;
	
	cout << "Digite o nome do aluno (a). \n";
	getline(cin, nome);
	
	cout << "Digite a nota 1. \n";
	cin >> nota1;
	
	cout << "Digite a nota 2. \n";
	cin >> nota2;
	
	cout << "Digite a nota 3. \n";
	cin >> nota3;
	
	cout << "Digite a nota 4. \n";
	cin >> nota4;
	
	media = ( nota1 + nota2 + nota3 + nota4 )  / 4 ;
	
	cout << "--------------------------------------------------- \n";
	cout << "Nome do aluno (a): " << nome <<  "\n";
	cout << "Nota 1: " << nota1 <<  "\n";
	cout << "Nota 2: " << nota2 <<  "\n";
	cout << "Nota 3: " << nota3 <<  "\n";
	cout << "Nota 4: " << nota4 <<  "\n";
	cout << "--------------------------------------------------- \n";
	cout << "\n \n";
	cout << "Média: " << media <<  "\n";
	cout << "\n \n";
	cout << "--------------------------------------------------- \n";
	
	
	
system("pause");
return 0;
}
