#include <iostream>
#include <cstring>
using namespace std;

int contaParole(const char str[]){

	int n = strlen(str);
	int ans = 0;
	
	for(int i = 1; i < n; i++) if(str[i-1] != ' ' and str[i] == ' ') ans++;	
	
	if(str[n-1] != ' ') ans++;
	
	return ans;
}

int main(){

	char stringa1[] = "Lorem ipsum  dolor   sit  amet   ";
	cout << "Numero di parole della prima stringa: " << contaParole(stringa1) << "\n";
	char stringa2[] = "    Lorem ipsum  dolor   sit  amet   ";
	cout << "Numero di parole della seconda stringa: " << contaParole(stringa2) << "\n";

	return 0;
}
