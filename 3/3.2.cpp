#include <iostream>
using namespace std;

int main(int argn, char** argv){

	int m, n;
	
	do{
		cout << "Inserisci m (positivo): ";
		cin >> m;
	}while(m < 0);
	
	do{
		cout << "Inserisci n (positivo): ";
		cin >> n;
	}while(n < 0);
	
	cout << "Il Massimo Comun Divisore tra " << m << " " << n << " e': ";
	
	do{
		if(m < n){
			int tmp = n;
			n = m;
			m = tmp;
		}
		m -= n;
	}while(m != n);

	cout << m;

	return 0;
}
