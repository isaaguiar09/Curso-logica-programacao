#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	double metros, cm;
	
	cout << "Digite os metros que deseja transformar em cent�metros. \n";
	cin >> metros;
	
	cm = metros * 100;
	
	cout << "-------------------------------------------- \n";
	cout << metros << "m em cent�metros ser� " << cm << "cm. \n";
	cout << "-------------------------------------------- \n";
	
	
	
system("pause");
return 0;
}
