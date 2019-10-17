#include <iostream>
using namespace std;

int main(int argn, char** argv){
	
	double a, b;
	
	do{
		cout << "Inserire il valore di a (deve essere diverso da 0): ";
		cin >> a;
	}while(a == 0);

	do{
		cout << "Inserire il valore di b (deve essere diverso da 0): ";
		cin >> b;
	}while(b == 0);
	
	cout << "La soluzione dell'equazione e': " << -b/a;

	return 0;
}
