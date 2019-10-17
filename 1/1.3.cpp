#include <iostream>
using namespace std;

int main(int argn, char** argv){

	int dividendo, divisore;

    cout << "Inserisci il dividendo: ";
	cin >> dividendo;
	
	do{
		cout << "Inserisci il divisore (deve essere diverso da 0): ";
		cin >> divisore;
	}while(divisore == 0);
	
	cout << "La parte intera del quoziente e': " << dividendo/divisore << endl;
	cout << "Il resto della divisione intera e': " << dividendo%divisore;
	
    return 0;
}
