#include <iostream>
using namespace std;

int main(int argn, char** argv){

	unsigned int n;
	cout << "Base quadrato: ";
	cin >> n;
	
	unsigned int i = 0;
	while(i < n){
		unsigned int j = 0;
		while(j < n){
			cout << "*";
			j++;
		}
		cout << "\n";
		i++;
	}
	
	cout << "\n\n";
	
	i = 0;
	while(i < n){
		cout << "*";
		unsigned int j = 0;
		while(j < n-2){
			cout << ((i == 0 || i == n-1) ? "*" : " ");
			j++;
		}
		cout << "*";
		cout << "\n";
		i++;
	}

	return 0;
}
