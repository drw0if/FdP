#include <iostream>
using namespace std;

void inizializzaP(int **p){
	*p = NULL;
}

int main(int argn, char** argv){

	int k = 5;
	int* p;
	cout << "p non inizializzato: " << p << "\n";
	p = &k;
	cout << "p punta a k: " << p << "\n";;
	cout << "valore di k: " << *p << "\n";
	inizializzaP(&p);

	cout << "p inizializzato a NULL: " << p << "\n";
	return 0;
}
