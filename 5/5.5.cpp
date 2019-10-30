#include <iostream>
using namespace std;

int restituisciPrimoValorePari(int a, int b, int c){

	if(a%2 == 0) return a;
	if(b%2 == 0) return b;
	if(c%2 == 0) return c;
	return -1;
}

int main(int argn, char** argv){

	int a, b, c;
	cout << "Inserisci tre interi: ";
	cin >> a >> b >> c;

	int ans = restituisciPrimoValorePari(a, b, c);

	if(ans == -1) cout << "Nessun numero pari presente nella sequenza inserita\n";
	else cout << "Il primo numero pari della sequenza e': " << ans;
	return 0;
}
