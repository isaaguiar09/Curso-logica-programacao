#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero1, numero2, numero3;
	
	cout << "Digite o 1º número. \n ";
	cin >> numero1;
	
	cout << "Digite o 2º número. \n ";
	cin >> numero2;
	
	cout << "Digite o 3º número. \n ";
	cin >> numero3;
	
	if ( numero1 > numero2 && numero2 > numero3 ) {
		
		cout << "\n \n " << numero1 << " " << numero2 << " " << numero3 << "\n \n";
		
	} else if ( numero2 > numero1 && numero1 > numero3 ) {
		
		cout << "\n \n " << numero2 << " " << numero1 << " " << numero3 << "\n \n";
		
	} else if ( numero3 > numero2 && numero2 > numero1 ) {
		
		cout << "\n \n " << numero3 << " " << numero2 << " " << numero1 << "\n \n";
		
	} else if ( numero3 > numero1 && numero1 > numero2 ) {
		
		cout << "\n \n " << numero3 << " " << numero1 << " " << numero2 << "\n \n";
		
	} else if ( numero1 > numero3 && numero3 > numero2 ) {
		
		cout << "\n \n " << numero1 << " " << numero3 << " " << numero2 << "\n \n";
		
	} else if ( numero2 > numero3 && numero3 > numero1 ) {
		
		cout << "\n \n " << numero2 << " " << numero3 << " " << numero1 << "\n \n";
		
	} 
	
system("pause");
return 0;
}
