#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero;
	string fruta;
	
	numero = 5;
	
	cout << "---------------- EXEMPLO 1 ----------------- \n \n";
	
	if ( numero >= 2 && numero <= 10 ) {
		
		cout << " O n�mero est� no intervalo de 2 a 10. \n \n";
		
	} else {
		
		cout << " O n�mero n�o est� no intervalo de 2 a 10. \n \n";
		
	}
	
	cout << "---------------- EXEMPLO 2 ----------------- \n \n";
	
	if ( numero >= 2 || numero <= 10) {
		
			cout << " O n�mero est� no intervalo de 2 a 10. \n \n";
		
	} else {
		
		cout << " O n�mero n�o est� no intervalo de 2 a 10. \n \n";
		
	}
	
	
	fruta = "laranja";
	
	cout << "---------------- EXEMPLO 3 ----------------- \n \n";
	
	if ( fruta == "Ma��" || fruta == "Banana") {
		
		cout << "Fruta = " << fruta << "\n \n";
		
	} else {
		
		cout << " A fruta n�o � ma�� e nem banana!!  \n \n";
		
	}
	
	
	
system("pause");

return 0;
}
