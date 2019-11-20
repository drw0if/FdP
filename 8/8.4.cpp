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

void stampa(elem* &p0){

	elem* cursor = p0;
	while(cursor != NULL){
		cout << cursor->value << " ";
		cursor = cursor->next;
	}
	cout << "\n";
}

void cancellaNumero(elem* &p0, int value){
	elem* cursor = p0;
	
	while(cursor != NULL && cursor->value == value){
		p0 = cursor->next;
		delete cursor;
		cursor = p0;
	}
	
	while(cursor->next != NULL){
		elem* next = cursor->next;
		
		if(next->value == value){
			cursor->next = next->next;
			delete next;
		}
		
		cursor = cursor->next;
	}
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
	p0->value = 50;
	
	push_back(p0, 60);
	push_front(p0, 70);
	
	stampa(p0);
	cancellaNumero(p0, 50);
	stampa(p0);
	
	distruggi(p0);
	return 0;
}
