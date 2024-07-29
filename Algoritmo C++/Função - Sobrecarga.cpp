#include  <iostream>

#include  <locale.h>

using namespace std;

void soman ( int n1, int n2);
void soman ( int v1, int v2, int v3);

int main(){
	
	setlocale(LC_ALL, "");
	
	soman(10, 2);
	soman(10, 5, 20);

system("pause");
return 0;
}

void soman ( int n1, int n2) {
	
	cout << "Total da soma 1: " << n1 + n2 << "\n\n";
	
}

void soman (int v1, int v2, int v3) {
	
	cout << "Total da soma 2: " << v1 + v2 + v3 << "\n\n";
	
}


