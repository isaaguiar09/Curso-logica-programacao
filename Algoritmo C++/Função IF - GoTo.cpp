#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	string pais;
	
	recomecar: 
	
	cout << " 9Qual o país vai ganhar a Copa do Mundo? \n";
	cin >> pais;
	
	if ( pais == "Brasil" ){
		
		cout << " Isso!!! O Brasil ganhará a Copa do Mundo. \n";
		
	} else if ( pais == "brasil") {
		
		cout << " Isso!!! O Brasil ganhará a Copa do Mundo. \n";
		
	} else {
		
		cout << " \n ";
		goto recomecar;
	}
	
	
system("pause");
return 0;
}

