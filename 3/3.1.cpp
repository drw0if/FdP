/*
 * Leggere b ed e e calcolare la potenza b^e, gestendo i casi in cui b ed e possano valere 0
 */

#include <iostream>
using namespace std;

int main(int argn, char** argv){
	
	int b, e;
	//Continuo a chiedere di inserire b finché non viene inserito un numero non negativo
	do{
		cout << "Inserisci b (non negativo): ";
		cin >> b;
	}while(b < 0);

	//Continuo a chiedere di inserire e finché non viene inserito un numero non negativo
	do{	
		cout << "Inserisci e (non negativo): ";
		cin >> e;
	}while(e < 0);

	//Controllo i casi in cui l'esponente sia 0
	if(e == 0) cout << ((b == 0) ? "Risultato indefinito\n" : "1\n");
	else{
		//Calcolo b^e attraverso moltiplicazioni successive
		int ris = b, i = 1;
		while(i < e){
			ris *= b;
			i++;
		}
		cout << ris << "\n";
	}
	
	return 0;
}
