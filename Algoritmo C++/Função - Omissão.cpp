#include  <iostream>

#include  <locale.h>

using namespace std;

void funcaon(string nome= "Paulo");
void funcaoi(int idade= 29);

int main(){
	
	setlocale(LC_ALL, "");
	
	funcaon();
	funcaoi();
	
system("pause");
return 0;
}

void funcaon(string nome) {
	
	cout << "Nome: " << nome << "\n\n";
	
}

void funcaoi(int idade) {
	
	cout << "Idade: " << idade << "\n\n";
	
}



	
