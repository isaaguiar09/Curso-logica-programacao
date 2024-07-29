#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	string sexo;
	
	cout << "Digite F ou M para o seu gênero. \n \n";
	cin >> sexo;
	
	if (sexo == "F" ) {
		
		cout << "\n \n ------------------------------------------------- \n \n";
		cout << " O gênero é FEMININO. \n \n";
		
	} else if ( sexo == "M") {
		
			cout << "\n \n ------------------------------------------------- \n \n";
		cout << " O gênero é MASCULINO. \n \n";
		
	} else {
		
		cout << "\n \n ------------------------------------------------- \n \n";
		cout << " O gênero é inválido!! Tente novamente. \n \n";
		
	}
	
	
	
system("pause");
return 0;
}

