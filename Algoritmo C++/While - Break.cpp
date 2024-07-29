#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int contador;
	
	contador = 1;
	
	//--------------------------------------------------------------------
	
	while ( contador < 100) {
		
		cout << "Número: " << contador << "\n \n";
		
		if ( contador == 50) {
			
			break;
			
		}
		
		contador++;
		
	}
	
system("pause");
return 0;
}


	
