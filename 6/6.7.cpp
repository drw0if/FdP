#include <iostream>
#include <cstring>
using namespace std;

void my_strcat(char* dest, char* sorg){
	
	int n1 = strlen(dest);
	int n2 = strlen(sorg);
	
	for(int i = 0; i < n2; i++)
		dest[n1+i] = sorg[i];
		
	dest[n1+n2] = '\0';
}

int main(){

	char dest[27] = "Lorem ipsum ";
	char sorg[] = "dolor sit amet";

	my_strcat(dest, sorg);
	cout << dest;

	return 0;
}
