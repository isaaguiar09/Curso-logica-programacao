#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1, numero2;
	string fruta;
	
	numero1 = 20;
	numero2 = 10;
	fruta = "Ma��";
	
	cout << "\n ------------------ Exemplo 1 ------------------ \n \n";
	if ( numero1 > 50) {
		cout << " O n�mero 1 � maior que 5. \n";
		
	}else{
		
		cout << " O n�mero 1 n�o � maior que 5. \n";
	}
	
	cout << "\n ------------------ Exemplo 2 ------------------ \n \n ";
		if ( numero1 > numero2) {
		cout << " O n�mero 1 � maior que o n�mero 2. \n";
		
	}else{
		
		cout << "  O n�mero 1 n�o � maior que o n�mero 2. \n";
	}
	
	cout << "\n ------------------ Exemplo 3 ------------------ \n \n ";
	
		if ( fruta == "Ma��") {
		cout << " A fruta � igual ma��. \n";
		
	}else{
		
		cout << " A fruta n�o � igual ma��.  \n";
	}

system("pause");
return 0;
}
