#include <iostream>
using namespace std;

int f(int* n){
	cout << "Dentro f(): valore puntatore: " << n << "\n";
	cout << "Dentro f(): valore oggetto puntato: " << *n << "\n";

	if(!(*n & 1)) return (*n) * (*n);
	if((*n)%3 == 0) return (*n) * (*n) * (*n);
	return *n;
}

int main(int argn, char** argv){

	int n;
	cout << "Numero: ";
	cin >> n;

	cout << "Indirizzo di memoria: " << &n << "\n";

	int value = f(&n);
	cout << "Il risultato e': " << value;

	return 0;
}
