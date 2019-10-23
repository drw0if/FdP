/*
 * Scrivere un programma che preso n in input crei un triangolo del tipo:
 * *
 * **
 * ***
 * Ed uno del tipo
 * ***
 *  **
 *   *
 */
#include <iostream>
using namespace std;

int main(int argn, char** argv){

	int n;
	cout << "Inserisci il lato: ";
	cin >> n;

	cout << "Triangolo rettangolo\n";	
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}

	cout << "\nTriangolo rettangolo rovesciato\n";

	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++)
			cout << " ";
		for(int j = i; j < n; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}
