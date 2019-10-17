#include <iostream>
using namespace std;

int main(int argn, char** argv){

	unsigned short int n;
	
	do{
		cout << "Inserisci n[0,15]: ";
		cin >> n;
	}while(n >= 16);
	
	unsigned short int m1 = 1 << n;
	cout << "Valore numerico della maschera M1: " << m1 << "\n";

	unsigned short int m2 = ~m1;
	cout << "Valore numerico della maschera M2: " << m2 << "\n";

	

	return 0;
}
