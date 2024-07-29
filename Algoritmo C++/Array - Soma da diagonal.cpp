#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int matriz[3][3];
	int linha, coluna, diagonal;
	
	for ( linha = 0; linha < 3; linha++) {
		
		for ( coluna = 0; coluna < 3; coluna++) {
		
		cout << "Digite o número da linha: " << linha << ", coluna: " << coluna << "\n";
		cin >> matriz[linha][coluna];
		
	}
	
}
	
	cout << "\n\n ------------------------------------------------ \n\n";
	
	for ( linha = 0; linha < 3; linha++) {
		
		for ( coluna = 0; coluna < 3; coluna++) {
		
		cout << matriz[linha][coluna] << " ";
		
	}
	
	cout << "\n";
}

	diagonal = matriz[0][0] + matriz[1][1] + matriz[2][2];
	cout << "\n\nSoma da diagonal: " << diagonal << "\n\n";
	
	
system("pause");
return 0;
}
