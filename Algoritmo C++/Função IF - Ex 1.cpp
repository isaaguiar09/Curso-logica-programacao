#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1, numero2;
	string fruta;
	
	numero1 = 20;
	numero2 = 10;
	fruta = "Maçã";
	
	cout << "\n ------------------ Exemplo 1 ------------------ \n \n";
	if ( numero1 > 50) {
		cout << " O número 1 é maior que 5. \n";
		
	}else{
		
		cout << " O número 1 não é maior que 5. \n";
	}
	
	cout << "\n ------------------ Exemplo 2 ------------------ \n \n ";
		if ( numero1 > numero2) {
		cout << " O número 1 é maior que o número 2. \n";
		
	}else{
		
		cout << "  O número 1 não é maior que o número 2. \n";
	}
	
	cout << "\n ------------------ Exemplo 3 ------------------ \n \n ";
	
		if ( fruta == "Maçã") {
		cout << " A fruta é igual maçã. \n";
		
	}else{
		
		cout << " A fruta não é igual maçã.  \n";
	}

system("pause");
return 0;
}
