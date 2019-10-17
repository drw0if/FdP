#include <iostream>
using namespace std;

int main(int argn, char** argv){

    int n;
    
    cout << "Inserisci un numero intero: ";
    cin >> n;

	cout << ((n >= 0) ? n : -n);
    return 0;
}
