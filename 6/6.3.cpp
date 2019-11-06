#include <iostream>
using namespace std;

bool pari(const int v[], int n){
	int somma = 0;
	for(int i = 0; i < n; i++) somma += v[i];
	
	
	return !(somma & 1);
}

int main(){
	
	int n = 10;
	int v[n];
	
	cout << "Inserisci 10 interi\n";
	for(int i = 0; i < n; i++)
		cin >> v[i];
		
	cout << "La somma degli interi inseriti e' " << ((pari(v, n)) ? "PARI" : "DISPARI") << "\n";
	
	return 0;
}
