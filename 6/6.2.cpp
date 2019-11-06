#include <iostream>
using namespace std;

int posMinimo(const double v[], int n){

	int ans = 0;
	for(int i = 0; i < n; i++)
		if(v[ans] > v[i]) ans = i;

	return ans;
}

int main(){
	
	double v[] = {1.3, 4.5, 2.4, 8.4, -3.14, -3.14};
	int n = sizeof(v)/sizeof(v[0]);
		
	cout << "La posizione del primo minimo all'interno del vettore e': " << posMinimo(v, n) << "\n"; 

	return 0;
}
