#include <iostream>
using namespace std;

int somma_diag(const int* mat, int n){
	
	int somma = 0;
	for(int i = 0; i < n; i++){
		somma += mat[i*(n+1)];
		somma += mat[i*n + (n-1-i)];
	}
	
	if(n%2 == 1){
		int middle = n/2 + 1;
		somma -= mat[middle*(n+1)];
	}
	
	return somma;
}

int main(int argn, char** argv){
		
	const int DIM = 3;
	int mat[DIM][DIM];
	
	cout << "Inserisci 9 interi:" << endl;
	for(int i = 0; i < DIM; i++)
		for(int j = 0; j < DIM; j++)
			cin >> mat[i][j];

	int somma = somma_diag((int*)mat, DIM);
	cout << "La somma degli elementi sulla diag. princi. e sec. e' : " << somma << endl;
	
	return 0;
}
