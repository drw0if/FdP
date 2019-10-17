/*
 * Leggere n di tipo unsigned short int e:
 * creare una maschera M1 con l'n-esimo bit ad 1 e tutti gli altri a 0
 * creare una maschera M2 con l'n-esimo bit a 0 e tutti gli altri a 1
 */

#include <iostream>
using namespace std;

int main(int argn, char** argv){

	unsigned short int n;
	
	//Leggo n finché non viene inserito all'interno del range
	do{
		cout << "Inserisci n[0,15]: ";
		cin >> n;
	}while(n >= 16);
	
	//Creo la maschera M1 shiftando 1 a sinistra di n volte
	unsigned short int m1 = 1 << n;
	cout << "Valore numerico della maschera M1: " << m1 << "\n";

	//Creo la maschera M2 cambiando tutti i bit di M1 (not logico bit a bit)
	unsigned short int m2 = ~m1;
	cout << "Valore numerico della maschera M2: " << m2 << "\n";

	

	return 0;
}
