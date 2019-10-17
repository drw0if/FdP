#include <iostream>
using namespace std;

int main(int argn, char** argv){
	
	int a,b,c;
	
	cout << "Inserisci tre interi: ";
	cin >> a >> b >> c;
	
	int max = a;
	
	if(b > max) max = b;
	if(c > max) max = c;
	
	cout << "Il massimo e': " << max;
	
	return 0;
}
