#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1, numero2, numero3;
	
	cout << "Digite o 1� n�mero. \n ";
	cin >> numero1;
	
	cout << "Digite o 2� n�mero. \n ";
	cin >> numero2;
	
	cout << "Digite o 3� n�mero. \n ";
	cin >> numero3;
	
	if ( numero1 > numero2 && numero1 > numero3 ) {
		
		cout << " \n \n--------------------------------------------- \n \n";
		cout << " O n�mero " << numero1 << "  � o MAIOR. \n";
	
	} else if ( numero2 > numero1 && numero2 > numero3 ) {
		
		cout << " \n \n--------------------------------------------- \n \n";
		cout << " O n�mero " << numero2 << " � o MAIOR. \n";
		
	} else {
		
			cout << " \n \n--------------------------------------------- \n \n";
		cout << " O n�mero " << numero3 << " � o MAIOR. \n";
		
	}
	
	if ( numero1 < numero2 && numero1 < numero3 ) {
		
		cout << " \n \n--------------------------------------------- \n \n";
		cout << " O n�mero " << numero1 << " � o MENOR. \n \n";
	
	} else if ( numero2 < numero1 && numero2 < numero3 ) {
		
		cout << " \n \n--------------------------------------------- \n \n";
		cout << " O n�mero " << numero2 << " � o MENOR. \n \n";
		
	} else {
		
			cout << " \n \n--------------------------------------------- \n \n";
		cout << " O n�mero " << numero3 << " � o MENOR. \n \n";
		
	}
	
system("pause");
return 0;
}


