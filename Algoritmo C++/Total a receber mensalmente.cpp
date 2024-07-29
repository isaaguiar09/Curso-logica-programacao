#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	double horas, valorH, total;
	
	cout << "Qual o valor que recebe por hora trabalhada? \n";
	cin >> valorH;
	
	cout << "Qual o total de horas trabalhadas no mês? \n";
	cin >> horas;
	
	total = horas * valorH;
	
	cout << "\n \n -------------------------- Resultado -------------------------- \n \n";
	cout << "Total a receber no mês: " << total << "\n";
	
	
system("pause");
return 0;
}
