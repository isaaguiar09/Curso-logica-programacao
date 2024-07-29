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
	
	if ( numero1 > numero2 && numero1 > numero3 ) {
		
		cout << " \n \n--------------------------------------------- \n \n";
		cout << " O número " << numero1 << "  é o MAIOR. \n";
	
	} else if ( numero2 > numero1 && numero2 > numero3 ) {
		
		cout << " \n \n--------------------------------------------- \n \n";
		cout << " O número " << numero2 << " é o MAIOR. \n";
		
	} else {
		
			cout << " \n \n--------------------------------------------- \n \n";
		cout << " O número " << numero3 << " é o MAIOR. \n";
		
	}
	
	if ( numero1 < numero2 && numero1 < numero3 ) {
		
		cout << " \n \n--------------------------------------------- \n \n";
		cout << " O número " << numero1 << " é o MENOR. \n \n";
	
	} else if ( numero2 < numero1 && numero2 < numero3 ) {
		
		cout << " \n \n--------------------------------------------- \n \n";
		cout << " O número " << numero2 << " é o MENOR. \n \n";
		
	} else {
		
			cout << " \n \n--------------------------------------------- \n \n";
		cout << " O número " << numero3 << " é o MENOR. \n \n";
		
	}
	
system("pause");
return 0;
}


