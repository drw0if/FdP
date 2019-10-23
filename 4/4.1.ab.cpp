/*
 * Scrivere un programma che preso n in input crei un triangolo del tipo:
 * *****
 *  ***
 *   * 
 * Ed uno del tipo
 * *
 * **
 * ***
 * ****
 * *****
 * ****
 * ***
 * **
 * *
 */
#include <iostream>
using namespace std;

int main(int argn, char** argv){

	int n;
	do{
		cout << "Inserisci il lato (dispari): ";
		cin >> n;
	}while(!(n & 1));

	cout << "Triangolo isoscele\n\n";	
	int h = n/2 + 1;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < i; j++)
			cout << " ";
		for(int j = i; j < n-i; j++)
			cout << "*";
		cout << "\n";
	}

	cout << "\nTriangolo isoscele rovesciato\n";

	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
	for(int i = n; i > 0; i--){
		for(int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}
