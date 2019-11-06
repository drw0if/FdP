#include <iostream>
using namespace std;

double massimo(const double v[], int n){
	
	double ans = v[0];
	for(int i = 0; i < n; i++)
		if (v[i] > ans) ans = v[i];
	
	return ans;
}

int main(){
	
	double v[] = {1.3, 4.5, 2.4, 8.4, -3.14, -3.14};
	int n = sizeof(v)/sizeof(v[0]);
		
	cout << "il valore massimo presente nel vettore e': " << massimo(v, n) << "\n"; 
	
	return 0;
}
