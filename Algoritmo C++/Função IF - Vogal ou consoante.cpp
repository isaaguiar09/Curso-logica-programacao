#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	string letra;
	
	cout << "\n Digite uma letra. \n";
	cin >> letra;
	
	if ( letra == "A" || letra == "E" || letra == "I" || letra == "O" || letra == "U") {
		
		cout << " \n \n ---------------------------------------------------- \n \n";
		cout << " A letra " << letra << " é uma VOGAL!!! \n \n";
		
	} else if ( letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u" ) {
		
		cout << " \n \n ---------------------------------------------------- \n \n";
		cout << " A letra " << letra << " é uma VOGAL !!! \n \n";
		
	} else {
		
		cout << " \n \n ---------------------------------------------------- \n \n";
		cout << " A letra " << letra << " é uma CONSOANTE!!! \n \n";
		
	}
	
	
system("pause");
return 0;
}


