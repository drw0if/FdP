#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout << "Inserisci un numero: ";
	cin >> n;
	
	cout << ((n & 1) ? 'D' : 'P' );

    return 0;
}
