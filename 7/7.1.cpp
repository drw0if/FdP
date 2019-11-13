#include <iostream>
using namespace std;

void componenti_negative(const int* v, int n, int* &neg, int &nuovaDIM){
	
	for(int i = 0; i < n; i++) if(v[i] < 0) nuovaDIM++;

	neg = new int[nuovaDIM];
	
	int j = 0;
	for(int i = 0; i < n; i++) if(v[i] < 0) neg[j++] = v[i];
}

int main(int argn, char** argv){

	const int DIM = 6;		
	const int v[] = {11, -22, 4, -3, 18, -1};
	
	cout << "Vettore di partenza (con componenti sia positive che negative): " << endl;
	for(int i = 0; i < DIM; i++)
		cout << v[i] << " ";
	cout << endl;
	
	int* nuovoVett = NULL;
	int nuovaDIM = 0;
		
	componenti_negative(v, DIM, nuovoVett, nuovaDIM);
	cout << "Ecco il nuovo vettore (solo componenti negative): " << endl;
	
	for(int i = 0; i < nuovaDIM; i++)
		cout << nuovoVett[i] << " ";
	cout << endl;
	
	cout << "Ora che non mi serve piu', posso deallocarlo dallo Heap";
	
	delete nuovoVett;
	
	return 0;
}
