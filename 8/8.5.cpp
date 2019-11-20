#include <iostream>
using namespace std;

struct elem{
	int value;
	elem* next;
};

void push_back(elem* &p0, int value){
	
	elem* tmp = new elem;
	tmp->next = NULL;
	tmp->value = value;
	
	elem* cursor = p0;
	while(cursor->next != NULL){
		cursor = cursor->next;
	}
	
	cursor->next = tmp;
}

void push_front(elem* &p0, int value){
	
	elem* tmp = new elem;
	tmp->value = value;
	
	tmp->next = p0;
	p0 = tmp;
}

void inserisciOrdinato(elem* &p0, int value){

	elem* tmp = new elem;
	tmp->value = value;

	if(value <= p0->value){
		tmp->next = p0;
		p0 = tmp;
		return;
	}
	
	elem* cursor = p0;
	while(cursor->next != NULL){
		if(cursor->value <= value and cursor->next->value >= value){
			tmp->next = cursor->next;
			cursor->next = tmp;
			return;
		}
			
		cursor = cursor->next;
	}
	cursor->next = tmp;
}

void stampa(elem* &p0){

	elem* cursor = p0;
	while(cursor != NULL){
		cout << cursor->value << " ";
		cursor = cursor->next;
	}
	cout << "\n";
}

void distruggi(elem* &p0){
	elem* cursor = p0;
	
	while(cursor != NULL){
		elem* next = cursor->next;
		delete cursor;
		cursor = next;
	}
	
}

int main(int argn, char** argv){
	
	elem* p0 = new elem;
	int n;
	cin >> n;
	p0->value = n;
	
	for(int i = 0; i < 5; i++){
		cin >> n;
		inserisciOrdinato(p0, n);
	}

	cout << "Risultato: ";
	stampa(p0);
	distruggi(p0);
	
	return 0;
}
