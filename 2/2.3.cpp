#include <iostream>
using namespace std;

int main(int argn, char** argv){
	
	char c;
	
	cout << "Inserisci un carattere: ";
	cin >> c;
	
	if(c >= 'a' && c <= 'z') cout << 'm';
	else if (c >= 'A' && c <= 'Z') cout << 'M';
	
	return 0;
}
