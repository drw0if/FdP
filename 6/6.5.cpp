#include <iostream>
#include <cstring>
using namespace std;

bool palindroma(const char stringa[]){

	int n = strlen(stringa);
	
	if(stringa[n-1] == '\n') n--;
	
	for(int i = 0; i < n/2; i++)
		if(stringa[i] != stringa[n-1-i]) return false;

	return true;
}

int main(){
	
	char stringa[41];
	
	fgets(stringa, 40, stdin);
	cout << "La parola" << (palindroma(stringa) ? "" : " NON") << " e' palindroma";
	
	return 0;
}
