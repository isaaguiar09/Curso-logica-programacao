#include  <iostream>

#include  <locale.h>

double nota1VG, nota2VG;

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	double nota3VL, nota4VL, media;
	
	nota1VG = 9;
	nota2VG = 8;
	nota3VL = 5;
	nota4VL = 6;
	media = nota1VG + nota2VG + nota3VL + nota4VL / 4;
	
	cout << "Média: " << media << "\n";
	
system("pause");
return 0;
}
