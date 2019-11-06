#include <iostream>
using namespace std;

void concatena(const int* v1, const int* v2, int n1, int n2, int* v3){
	
	for(int i = 0; i < n1; i++)
		v3[i] = v1[i];
	
	for(int i = 0; i < n2; i++)
		v3[n1+i] = v2[i];
}

int main(){
	
	int v1[] = {2, 6};
	int v2[] = {3, 15, 4};
	
	int n1 = sizeof(v1)/sizeof(int);
	int n2 = sizeof(v2)/sizeof(int);
	
	int v3[n1+n2];
	
	concatena(v1, v2, n1, n2, v3);
	
	cout << "v3: ";
	for(int i = 0; i < n1+n2; i++)
		cout << v3[i] << " ";
	
	return 0;
}
