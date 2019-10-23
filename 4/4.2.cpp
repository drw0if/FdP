/*
 * Scrivere un programma che prenda in input un numero n
 * e stampi la tavola pitagorica di ordine n
 */

#include <iostream>
using namespace std;

int main(int argn, char** argv){

	int n;
	cout << "Ordine della tavola: ";
	cin >> n;

	cout << "Tavola pitagorica di ordine " << n << "\n";

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cout << i*j << " ";
		cout << "\n";
	}

	return 0;
}
