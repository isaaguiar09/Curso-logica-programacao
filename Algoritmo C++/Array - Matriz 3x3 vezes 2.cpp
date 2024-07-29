#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int matriz[3][3];
	int linha, coluna, vezes;
	
	for ( linha = 0; linha < 3; linha++) {
		
	for ( coluna = 0; coluna < 3; coluna++) {
		
		cout << "Digite o número da linha: " << linha << ", coluna: " << coluna << "\n";
		cin >> matriz[linha][coluna];
		
		
	}
	
}
	
	cout << "\n\n ----------------------- Matriz ------------------------- \n\n";
	
	for ( linha = 0; linha < 3; linha++) {
		
		for ( coluna = 0; coluna < 3; coluna++) {
		
		cout << matriz[linha][coluna] << " ";
		
	}
	
	cout << "\n";
	
}
	
	cout << "\n\n ------------------------ Matriz vezes 2------------------------ \n\n";
	
	for ( linha = 0; linha < 3; linha++) {
		
		for ( coluna = 0; coluna < 3; coluna++) {
		
		matriz[linha][coluna] = matriz[linha][coluna] * 2;
		cout << matriz[linha][coluna] << " ";
		
	}
	
	cout << "\n";
		
}
		
system("pause");
return 0;
}
