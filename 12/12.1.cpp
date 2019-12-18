#include <iostream>
#include <fstream>
using namespace std;

int main(int argn, char** argv){
	
	int output[4] = {13, 7, 4, 16};
	
	ofstream out("interi.txt");
	
	for(int i = 0; i < 3; i++)
		out << output[i] << " ";
	out.close();

	out.open("interi.txt", fstream::app);
	out << output[3];
	out << '.';
	out.close();
	
	return 0;
}
