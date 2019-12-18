#include <iostream>
#include <fstream>
using namespace std;

int main(int argn, char** argv){
	
	char tmp, c;
	
	cout << "Inserisci il carattere da cercare: ";
	cin >> c;
	
	ifstream in("caratteri.txt");
	while(in >> tmp){
		if(tmp == c){
			cout << "Carattere presente nel file";
			in.close();
			return 0;
		}
	}
	in.close();
	
	ofstream out("caratteri.txt", fstream::app);
	out << c;
	out.close();
	cout << "Carattere inserito";
	return 0;
}
