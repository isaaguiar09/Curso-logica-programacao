#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int dois, cinco, dez, vinte, cinquenta, cem, duzentos, resto, valor;
	
	cout << " Digite o valor do saque ( 2 a 2000 ). \n";
	cin >> valor;
	
	if ( valor < 2 or valor > 2000 ) {
		
		cout << "Valor inválido! Tente novamente.";
		
	} else {
		
		duzentos = valor / 200;
		cout << "Resultado 200: " << duzentos << "\n";
		
		valor -= duzentos * 200;
		cout << "Resultado Valor: " << valor << "\n";
	}
	
	
	duzentos = valor / 200;
	valor -= duzentos * 200;
	
	cem = valor / 200;
	valor -= cem * 200;
	
	cinquenta = valor / 200;
	valor -= cinquenta * 200;
	
	vinte = valor / 200;
	valor -= vinte * 200;
	
	dez = valor / 200;
	valor -= dez * 200;
	
	cinco = valor / 200;
	valor -= cinco * 200;
	
	dois = valor / 200;
	valor -= dois * 200;
	
	resto = valor;
	
	if ( resto >= 1) {
		
		cout << "Valor inválido! \n \n";
		
	} else {
	
	 if ( duzentos > 0) {
		
		cout << " \n \n ------------------------------------------------------- \n \n";
		cout << "Nota (s) de duzentos: " << duzentos << "\n \n";
		
	} 
	
	if ( cem > 0) {
		
		cout << " \n \n ------------------------------------------------------- \n \n";
		cout << "Nota (s) de cem: " << cem << "\n \n";
		
	} 
	
	 if ( cinquenta > 0) {
		
		cout << " \n \n ------------------------------------------------------- \n \n";
		cout << "Nota (s): de cinquenta " << cinquenta << "\n \n";
		
	}
	 if ( vinte > 0) {
		
		cout << " \n \n ------------------------------------------------------- \n \n";
		cout << "Nota (s) de vinte: " << vinte << "\n \n";
		
	} 
	 if ( dez > 0) {
		
		cout << " \n \n ------------------------------------------------------- \n \n";
		cout << "Nota (s) de dez: " << dez << "\n \n";
		
	} 
	 if ( cinco > 0) {
		
		cout << " \n \n ------------------------------------------------------- \n \n";
		cout << "Nota (s) de cinco: " << cinco << "\n \n";
		
	} 
	 if ( dois > 0) {
		
		cout << " \n \n ------------------------------------------------------- \n \n";
		cout << "Nota (s) de dois: " << dois << "\n \n";
		
	}
	
    }

	
	
system("pause");
return 0;
}


	
