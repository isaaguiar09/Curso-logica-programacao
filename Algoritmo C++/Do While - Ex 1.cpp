#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int contador;
	
	contador = 1;
	
	do {
		
		cout << "Número: " << contador << "\n\n";
		
		contador++;
		
	} while( contador < 101 ) ;
		
		
system("pause");
return 0;
}
