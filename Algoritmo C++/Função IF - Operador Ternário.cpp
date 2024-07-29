#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	string letra, mensagem;
	
	cout << "Digite uma letra \n";
	cin >> letra;
	
	( letra == "a")? mensagem = "Você digitou a letra A!!!!!" : mensagem = "Você NÃO digitou a letra A!!!!!";
	
	cout << "--------------------------------------- \n \n";
	cout << " Letra digitada : " << letra << "\n \n";
	cout << " Resultado: " << mensagem << " \n \n";
	
	// ---------------------------------------------------------------------------
	
	string vogal, resultado;
	
	(letra == "a") ? resultado = "Vogal A" : (letra == "e") ? resultado = "Vogal E"  : (letra == "I") ? resultado = "Vogal I" : (letra == "O") ? resultado = "Vogal O" : (letra == "u") ? resultado = "Vogal U" : resultado = "Consoante"; 
	 
	cout << " Vogal digitada: " << letra << " \n \n";
	cout << " Resultado: " << resultado << "\n \n";
	
	
	// -------------------------------------------------------------------------------------------
	
	string sexo;
	int preco;
	
	preco = 10;
	
	cout << "\n Digite seu sexo. \n";
	cin >> sexo;
	
	(sexo == "m") ? preco++ : preco-=3;
	
	cout << "\n\n ------------ Ingresso ------------ \n \n";
	cout << "Preço: " << preco << "\n";
	cout << "Sexo: " << sexo << "\n";
	
	
system("pause");
return 0;
}
