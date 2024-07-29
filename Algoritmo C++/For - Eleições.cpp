#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int cand1, cand2, cand3, eleitores, nulos, contador, voto;
	
	cand1 = 0;
	cand2 = 0;
	cand3 = 0;
	nulos = 0;
	
	cout << "Digite o número de eleitores de São Paulo \n";
	cin >> eleitores;
		
		for ( contador = 1; contador <= eleitores; contador++) {
			
			cout << "\n\n";
			cout << "Escolha uma opção!! \n \n";
			cout << "Vereador Paulo - 1 \n";
			cout << "Vereador Marcos - 2 \n";
			cout << "Vereador Ricardo - 3 \n";
			cin>> voto;
			
			if ( voto == 1) {
				cand1++;
			} else if (voto == 2) {
				cand2++;
			} else if (voto == 3) {
				cand3++;
			} else {
			
				nulos++;
				
			}
		}
		
		cout << "\n\n -------------------- RESULTADO ---------------------- \n\n";
		cout << "Marcos: "	<< cand1 << " voto (s).\n";
		cout << "Paulo: "	<< cand2 << " voto (s).\n";
		cout << "Ricardo: "	<< cand3 << " voto (s).\n";
		cout << "Nulos: "	<< nulos << " voto (s).\n";
		
system("pause");
return 0;
}
