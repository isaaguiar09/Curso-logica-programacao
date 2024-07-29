#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, quantidade1, quantidade2, quantidade3, quantidade4;
	
	numero = 0;
	quantidade1 = 0;
	quantidade2 = 0;
	quantidade3 = 0;
	quantidade4 = 0;
	
	while ( true ) {
		
		cout << "Digite um número INTEIRO e POSITIVO \n";
	    cin >> numero;
	    
	    if (  numero < 0) {
	    	
	    	break;
	    	
		}
	    
	    if ( numero >= 0 || numero <= 10) {
	    	
	    	quantidade1 = quantidade1  + 1;
	    	
		}
		
		else if ( numero >= 11 || numero <= 20) {
	    	
	    	quantidade2 = quantidade2  + 1;
	    	
		}
		
		else if ( numero >= 21 || numero <= 30) {
	    	
	    	quantidade3 = quantidade3  + 1;
	    	
		}
		
		else if ( numero >= 31 || numero <= 40) {
	    	
	    	quantidade4 = quantidade4  + 1;
	    	
		}
		
	}
	
	cout << "\n \n -------------------------------------------------------- \n \n";
	cout << "Quantidade de números digitados nos seguintes intervalos: \n";
	cout << "\n \n -------------------------------------------------------- \n \n";
	cout << "[0-10]: " << quantidade1 << "\n";
	cout << "[11-20]: " << quantidade2 << "\n";
	cout << "[21-30]: " << quantidade3 << "\n";
	cout << "[31-40]: " << quantidade4 << "\n \n";
	
system("pause");
return 0;
}


