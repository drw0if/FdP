#include <iostream>
using namespace std;

int somma_diag(const int mat[][3]){
	int somma = 0;
	
	for(int i = 0; i < 3; i++){
		somma += mat[i][i];
		somma += mat[i][3-1-i];
	}
	somma -= mat[1][1];
	
	return somma;
}

int main(int argn, char** argv){
		
	int mat[3][3];
	
	cout << "Inserisci 9 interi:" << endl;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			cin >> mat[i][j];
	
	int somma = somma_diag(mat);
	cout << "La somma degli elementi sulla diag. princi. e sec. e' : " << somma << endl;
	
	return 0;
}
