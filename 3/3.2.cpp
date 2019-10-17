/*
 * Leggere da tastiera m ed n e calcolare il massimo comun divisore tramite l'algoritmo di Euclide
 */

#include <iostream>
using namespace std;

int main(int argn, char** argv){

	int m, n;
	//Continuo a chiedere l'inserimento di m finché non viene inserito un numero positivo	
	do{
		cout << "Inserisci m (positivo): ";
		cin >> m;
	}while(m < 0);

	//Continuo a chiedere l'inserimento di n finché non viene inserito un numero positivo
	do{
		cout << "Inserisci n (positivo): ";
		cin >> n;
	}while(n < 0);
	
	cout << "Il Massimo Comun Divisore tra " << m << " " << n << " e': ";

	//Calcolo l'MCD attraverso sottrazioni successive
	do{
		//Se m è minore di n li scambio
		if(m < n){
			int tmp = n;
			n = m;
			m = tmp;
		}
		m -= n;
		//Continuo a sottrarre finché i numeri sono diversi
	}while(m != n);

	cout << m;

	return 0;
}
