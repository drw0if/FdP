/*
 * Scrivere un programma con il seguente menù e che svolga le corrispondenti operazioni
 * 1) minimo di tre interi;
 * 2) massimo di tre interi;
 * 3) media di tre interi;
 * 0) esci;
 */

#include <iostream>
using namespace std;

int menu(){
	int choose;
	cout << "1: minimo di tre interi\n";
	cout << "2: massimo di tre interi\n";
	cout << "3: media di tre interi\n";
	cout << "0: esci\n";

	do{
		cout << "Scegli: ";
		cin >> choose;
	}while(choose < 0 || choose > 3);

	return choose;
}

int threeNumbersMin(){
	
	int a, b, c;
	cout << "Inserisci 3 numeri: ";
	cin >> a >> b >> c;
	
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;

	return min;
}

int threeNumbersMax(){
	
	int a, b, c;
	cout << "Inserisci 3 numeri: ";
	cin >> a >> b >> c;
	
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;

	return max;
}

int threeNumbersAvg(){
	
	int a, b, c;
	cout << "Inserisci 3 numeri: ";
	cin >> a >> b >> c;
	
	int avg = (a + b + c)/3;
	return avg;
}

int main(int argn, char** argv){

	while(true){
		switch(menu()){
			case 0: cout << "Bye bye"; return 0;
			case 1: cout << threeNumbersMin() << "\n\n"; break;
			case 2: cout << threeNumbersMax() << "\n\n"; break;
			case 3: cout << threeNumbersAvg() << "\n\n"; break;
		}
	}
	
	return 0;
}
