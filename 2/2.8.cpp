#include <iostream>
using namespace std;

int main(int argn, char** argv){

	int n;
	cout << "Inserisci un numero intero: ";
	
	cin >> n;

	if(n > 0) cout << 'P';
	else if(n < 0) cout << 'N';
	else cout << 'Z';

	return 0;
}
