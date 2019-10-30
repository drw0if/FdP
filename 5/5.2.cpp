#include <iostream>
using namespace std;

void raddoppia(int *a){
	cout << "Dentro raddoppia(): Indirizzo di a: " << a << "\n";
	cout << "Dentro raddoppia(): a: " << *a << "\n";
	*a = (*a)*2;
	cout << "Dentro raddoppia(): a: " << *a << "\n";
}

int main(int argn, char** argv){

	int n;
	cout << "Numero: ";
	cin >> n;
	cout << "Indirizzo di n: " << &n << "\n";
	raddoppia(&n);
	cout << "Nuovo di n: " << n << "\n";
	return 0;
}
