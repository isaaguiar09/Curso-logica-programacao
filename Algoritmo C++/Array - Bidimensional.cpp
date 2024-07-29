#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	//------------------------------------------------------------------------------------------------------------------------------------
	cout << "\n\n-------------------------- Ex1 --------------------------------------------- \n\n";
	
	string matriz[2][3];
	int linha, coluna;
	
	matriz[0][0] = "1";
	matriz[0][1] = "2";
	matriz[0][2] = "3";
	matriz[1][0] = "4";
	matriz[1][1] = "5";
	matriz[1][2] = "6";
	
	for ( linha = 0; linha < 2; linha++) {
		
		for ( coluna = 0; coluna < 3; coluna++) {
			
			cout << matriz[linha][coluna] << " ";
			
		}
		
		cout << "\n";
	}
	
	
	//------------------------------------------------------------------------------------------------------------------------------------
	cout << "\n\n-------------------------- Ex2 --------------------------------------------- \n\n";
	
	string matrizI[2][3];
	int linhaI, colunaI;
	
	matrizI[0][0] = "A";
	matrizI[0][1] = "B";
	matrizI[0][2] = "C";
	matrizI[1][0] = "D";
	matrizI[1][1] = "E";
	matrizI[1][2] = "F";
	
	for ( linhaI = 0; linhaI < 2; linhaI++) {
		
		for ( colunaI = 0; colunaI < 3; colunaI++) {
			
			cout << matrizI[linhaI][colunaI] << " ";
			
		}
		
		cout << "\n";
	}
	
	//------------------------------------------------------------------------------------------------------------------------------------
	cout << "\n\n-------------------------- Ex3 --------------------------------------------- \n\n";
	
	int matrizat[10][8];
	int linhat, colunat;
	
	for ( linhat = 0; linhat < 10; linhat++) {
		
		for ( colunat = 0; colunat < 8; colunat++) {
			
			matrizat[linhat][colunat] = colunat;
			
			
		}
	}
	
	for ( linhat = 0; linhat < 10; linhat++) {
		
		for ( colunat = 0; colunat < 8; colunat++) {
			
			cout << matrizat[linhat][colunat] << " ";
			
			
		}
		
		cout << "\n";
	}
	
	
system("pause");
return 0;
}
