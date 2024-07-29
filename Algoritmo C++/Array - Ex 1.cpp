#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	cout << "\n\n------------------------ Ex1 --------------------------\n\n";
	
	string gaveta[4];
	int posicao;
	
	gaveta[0] = "Camisas";
	gaveta[1] = "Calças";
	gaveta[2] = "Jaquetas";
	gaveta[3] = "Meias";
	
	cout << "Gaveta 1: " << gaveta[0] << "\n";
	cout << "Gaveta 2: " << gaveta[1] << "\n";
	cout << "Gaveta 3: " << gaveta[2] << "\n";
	cout << "Gaveta 4: " << gaveta[3] << "\n";
	
	//----------------------------------------------------------------------------------------------------
	
	cout << "\n\n------------------------ Ex2 --------------------------\n\n";
	
	for ( posicao = 0; posicao < 4; posicao++) {
		
		cout << "Posição " << posicao << " : " << gaveta[posicao] << "\n";
		
	}
	
	//----------------------------------------------------------------------------------------------------
	
	cout << "\n\n------------------------ Ex3 --------------------------\n\n";
	
	int tamanho = 10;
	int posicao2, contador;
	string letras[tamanho] = {"A", "B","C", "D","E", "F", "G", "H", "I", "J"};
	
	for ( posicao2 = 0, contador = 1; posicao2 < tamanho; posicao2++, contador++ ) {
		
		cout << "Letra " << contador << ": " << letras[posicao2] << "\n";
	}
	
system("pause");
return 0;
}
