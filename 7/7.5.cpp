#include <iostream>
using namespace std;

int* trasposta(const int* matr, int n){
	
	int* transposed = new int[n*n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			transposed[i*n + j] = matr[j*n + i];
	
	return transposed;
}

int main(int argn, char** argv){
	
	int DIM = 3;
	int mat[DIM][DIM];
	
	cout << "Inserisci 9 elementi: \n";
	for(int i = 0; i < DIM; i++){
		for(int j = 0; j < DIM; j++)
			cin >> mat[i][j];
	}
	
	cout << "Matrice di partenza: " << endl;
	
	for(int i = 0; i < DIM; i++){
		for(int j = 0; j < DIM; j++)
			cout << mat[i][j] << "\t";
		cout << endl;
	}
	
	
	int* transposed = trasposta((int*) mat, DIM);

	cout << endl << "Matrice trasposta: " << endl;
	
	for(int i = 0; i < DIM; i++){
		for(int j = 0; j < DIM; j++)
			cout << transposed[i*DIM + j] << "\t";
		cout << endl;
	}
	
	
	delete transposed;
	return 0;
}
