#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int matriz[3][3];
	int linha, coluna, vezes, maior5;
	
	for ( linha = 0; linha < 3; linha++) {
		
	for ( coluna = 0; coluna < 3; coluna++) {
		
		cout << "Digite o número da linha: " << linha << ", coluna: " << coluna << "\n";
		cin >> matriz[linha][coluna];
		
		
	}
	
}

	for ( linha = 0; linha < 3; linha++) {
		
		for ( coluna = 0; coluna < 3; coluna++) {
		
		if  (matriz[linha][coluna] > 5 ) {
			
			maior5++;
			
		}
		
	}
		
}
		
	cout << "\n\n ----------------------- Matriz ------------------------- \n\n";
	
	for ( linha = 0; linha < 3; linha++) {
		
		for ( coluna = 0; coluna < 3; coluna++) {
		
		cout << matriz[linha][coluna] << " ";
		
	}
	
	cout << "\n";
	
}

	cout << "\n\nQuantidade de números maiores que 5: " << maior5 << "\n\n";
		

	
	
	
system("pause");
return 0;
}


	
