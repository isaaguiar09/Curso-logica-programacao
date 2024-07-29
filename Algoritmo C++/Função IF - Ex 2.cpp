#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	string nome, genero;
	double desconto, entrada;
	
	entrada = 12;
	
	cout << "Digite o seu nome. \n";
	cin >> nome;
	
	cout << "Digite o seu gênero. \n";
	cin >> genero;

	
	if ( genero == "Masculino") {
		
		cout << "------------------- Resultado --------------------- \n \n";
		cout << "Nome: " << nome << "\n";
		cout << "Valor da entrada: " << entrada << "\n";
		
	} else if ( genero == "Feminino"){
		
		entrada/= 2;
		
		cout << "------------------- Resultado --------------------- \n \n";
		cout << "Nome: " << nome << "\n";
		cout << "Valor da entrada: " << entrada << "\n";
		
	} else {
		
		cout << " \n \n Valor inexistente. Tente novamente. \n";
	}
	
system("pause");
return 0;
}


	
