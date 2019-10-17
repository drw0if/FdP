#include <iostream>
using namespace std;

int main(int argn, char** argv){
	
	int b, e;
	
	do{
		cout << "Inserisci b (non negativo): ";
		cin >> b;
	}while(b < 0);

	do{	
		cout << "Inserisci e (non negativo): ";
		cin >> e;
	}while(e < 0);

	if(e == 0) cout << ((b == 0) ? "Risultato indefinito\n" : "1\n");
	else{
		int ris = b, i = 1;
		while(i < e){
			ris *= b;
			i++;
		}
		cout << ris << "\n";
	}
	
	return 0;
}
