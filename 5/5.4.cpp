#include <iostream>
using namespace std;

void calcolaStatistiche(int a, int b, int c, int* min, int* max, double* avg){
	*min = a;
	if(b < *min) *min = b;
	if(c < *min) *min = c;

	*max = a;
	if(b > *max) *max = b;
	if(c > *max) *max = c;

	*avg = (a+b+c)/3.;
}

int main(int argn, char** argv){

	int a, b, c;
	int min, max;
	double avg;

	cout << "Inserisci tre interi: ";
	cin >> a >> b >> c;
	calcolaStatistiche(a, b, c, &min, &max, &avg);
	cout << "Il minimo e': " << min << "\n";
	cout << "Il massimo e': " << max << "\n";
	cout << "La media e': " << avg << "\n";
	return 0;
}
