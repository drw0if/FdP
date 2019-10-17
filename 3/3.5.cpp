/*
 * Leggere n (naturale) da tastiera e stampare un quadrato n*n pieno ed un quadrato n*n vuoto 
 */
#include <iostream>
using namespace std;

int main(int argn, char** argv){

	//Leggo n
	unsigned int n;
	cout << "Base quadrato: ";
	cin >> n;
	
	//Stampo il quadrato pieno usando un while per la riga ed un while annidato per le colonne
	unsigned int i = 0;
	//Mi posiziono sulla riga
	while(i < n){
		//Riempio la riga di n asterischi
		unsigned int j = 0;
		while(j < n){
			cout << "*";
			j++;
		}
		//Cambio riga andando a capo
		cout << "\n";
		i++;
	}
	
	//Vado a capo 2 volte per lasciare spazio
	cout << "\n\n";

	//Stampo il quadrato vuoto usando un while per la riga ed uno annidato per le colonne
	i = 0;
	//Mi posiziono sulla riga
	while(i < n){
		//Stampo l'asterisco di inizio riga
		cout << "*";
		unsigned int j = 0;
		//Riempio la riga di asterischi o di spazi
		while(j < n-2){
			cout << ((i == 0 || i == n-1) ? "*" : " ");
			/*
			  Versione compatta di:
			  //Se sono nella prima o nell'ultima riga stampo asterischi altrimenti spazi
			  if (i == 0 || i == n-1)
			  	cout << "*";
			  else
			  	cout << " ";
			*/
			j++;
		}
		//Stampo l'asterisco di fine riga
		cout << "*";
		//Vado alla prossima riga
		cout << "\n";
		i++;
	}

	return 0;
}
