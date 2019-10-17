#include <iostream>
using namespace std;

int main(int argn, char** argv){
	
	int n;
	cout << "Inserisci un numero intero: ";
	cin >> n;
	
	if(!(n&1) && (n%4 != 0)) cout << "Multiplo di 2 ma non di 4";
	
	return 0;
}
