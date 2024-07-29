#include  <iostream>

#include  <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	double valorH, H, inss, ir, sindi, bruto, liquido;
	
	cout << " Digite o valor recebido por cada hora trabalhada \n";
	cin >> valorH;
	
	cout << " Digite a quantidade de horas trabalhada \n";
	cin >> H;
	
	bruto = valorH * H;
	ir = ( 11 * bruto) / 100;
	inss = ( 8 * bruto) / 100;
	sindi = ( 5 * bruto) / 100;
	liquido = bruto - ( ir + inss + sindi);
	
	cout << "\n \n ----------------- Resultado ----------------- \n \n ";
	cout << " Salário Bruto: R$" << bruto << "\n";
	cout << "  IR (11%): R$" << ir << "\n";
	cout << "  INSS (8%): R$" << inss << "\n";
	cout << "  Sindicato (5%): R$" << sindi << "\n";
	cout << "  Salário Liquído: R$" << liquido << "\n";
	
	
	
system("pause");
return 0;
}

