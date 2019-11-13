#include <iostream>
using namespace std;

int* riempi_matrice(int r, int c){
	
	int* v = new int[r*c];
	
	for(int i = 0; i < r; i++)
		if(i % 2 == 1){ //riga dispari
			for(int j = c; j >= 0; j--){
				v[i*c+j] = i*c + c-1-j +1;
			}
		}else{ //riga pari
			for(int j = 0; j < c; j++){
				int index = i*c+j;
				v[index] = index+1;
		}
	}

	return v;
}

int main(int argn, char** argv){
	
	int n, m;
	
	cout << "Inserire n ed m: ";
	cin >> n >> m;
	int* v = riempi_matrice(n, m);	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			cout << v[i*m+j] << "\t";
		cout << endl;
	}

		
	return 0;
}
