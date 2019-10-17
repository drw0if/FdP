#include <iostream>
using namespace std;

int main(int argn, char** argv){
	
	double a,b,x;
	
	cout << "Inserisci il valore di a: ";
	cin >> a;
	
	cout << "Inserisci il valore di b: ";
	cin >> b;
	
	cout << "Inserisci il valore di x: ";
	cin >> x;
	
	cout << "Il valore dell'ordinata y è: " << a*x + b;
	
	return 0;
}
