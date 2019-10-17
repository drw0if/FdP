#include <iostream>
using namespace std;

int main(int argn, char** argv){

	unsigned int x;
	
	cout << "Digita un numero senza segno: ";
	cin >> x;

	cout << "La codifica binaria di " << x << " e': ";
	int i = sizeof(x)*8 - 1;
	while(i >= 0){
		cout << ((x & (1 << i--)) ? "1" : "0");
	}

	return 0;
}
