#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int numerosInteiros = 3;
	double numerosCasasDecimais = 9.99;
	char letra = 'a';
	string textos = "Aluna : Isabela";
	bool verdadeiroFalso = false;
	
	cout << numerosInteiros << "\n";
	cout << numerosCasasDecimais << "\n";
	cout << letra << "\n";
	cout << textos << "\n";
	cout << verdadeiroFalso << "\n";	
	
	
	return 0;
}
