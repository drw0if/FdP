#include <iostream>
#include <fstream>
using namespace std;

int main(int argn, char** argv){
		
	ifstream in("interi.txt", fstream::in);
	
	int tmp;
	int count = 0;
	double avg = 0;
	
	while(in >> tmp){
		avg += tmp;
		count++;
	}
	
	in.close();

	ofstream out("output.txt");
	if(count) out << count << " " << (avg/(double)count);
	else out << "Errore nella lettura dal file";
	out.close();
	
	return 0;
}
