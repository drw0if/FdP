/*
 * Leggere un numero naturale x e stamparlo in binario
 */

#include <iostream>
using namespace std;

int main(int argn, char** argv){

	unsigned int x;

	//Leggo un numero naturale (unsigned)
	cout << "Digita un numero senza segno: ";
	cin >> x;

	cout << "La codifica binaria di " << x << " e': ";

	/*
	 * Uso la dimensione della variabile come contatore per le iterazioni che devo fare
	 * tramite sizeof() ottengo la dimensione in BYTE della variabile,
	 * moltiplicando per 8 ottengo il numero di bit, -1 perché inizio a contare da 0
	 */
	int i = sizeof(x)*8 - 1;

	//Ogni volta creo una maschera, la applico e se il bit è a 1 stampo 1, altrimenti 0
	while(i >= 0){
		cout << ((x & (1 << i--)) ? "1" : "0");
		/*
		  Versione compatta di:
		  int mask = 1 << i;
		  if(x & mask)
		      cout << "1";
		  else
		      cout << "0";
		  i--;
		*/
	}

	return 0;
}
