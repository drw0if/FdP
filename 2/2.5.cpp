#include <iostream>
#include <cmath>
using namespace std;

int main(int argn, char** argv){
	
	int a,b,c;
	
	cout << "Inserire coefficiente a: ";
	cin >> a;
	
	cout << "Inserire coefficiente b: ";
	cin >> b;
	
	cout << "Inserire coefficiente c: ";
	cin >> c;

	if(a == 0 && a == b){
		 cout << "Equazione degenere\n";
		 return 0;
	 }
	
	if(a == 0){
		cout << -b/c << "\n";
		return 0;
	}
		
	int delta = b * b -4 * a * c;

	if(delta < 0){
		cout << "Soluzioni immaginarie";
		return 0;
	}

	int deltaSqrt = sqrt(delta);
	
	cout << "x1: " << (-b-deltaSqrt)/(2*a) << "\nx2: " << (-b+deltaSqrt)/(2*a);
	
	return 0;
}
