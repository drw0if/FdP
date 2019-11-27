#include "iscrizione.h"
#include <cstring>
#include <iostream>

using namespace std;

void init(elem* &head){
	head = NULL;
}

void visualizza(elem* &head){
	cout << "Atleti iscritti:" << endl;
	elem* cursor = head;
	while(cursor != NULL){
		cout << cursor->nome << ", " << cursor->pettorale << endl;
		cursor = cursor->pun;
	}
	cout << endl;
}

bool aggiungi(elem*& head, const char* nome, int pettorale){
	
	if(head != NULL){
		elem* cursor = head;
		elem* last;

		while(cursor != NULL){
			if(strcmp(cursor->nome, nome) == 0 or cursor->pettorale == pettorale) return false;
			last = cursor;
			cursor = cursor->pun;
		}
	
		elem* tmp = new elem;
		tmp->pettorale = pettorale;
		strncpy(tmp->nome, nome, 30);
		
		last->pun = tmp;
	}
	else{
		elem* tmp = new elem;
		tmp->pettorale = pettorale;
		strncpy(tmp->nome, nome, 30);
		head = tmp;
	}
	return true;
}

bool cerca(elem* &head, const char* nome){
	
	if(head == NULL) return false;
	
	elem* cursor = head;
	
	while(cursor->pun != NULL){
		if(strcmp(cursor->nome, nome) == 0) return true;
		cursor = cursor->pun;
	}
	
	return false;
}

bool elimina(elem* &head, const char* nome){
	if(head == NULL) return false;

	//cancella se all'inizio della lista
	while(head != NULL and strcmp(head->nome, nome) == 0){
		elem* tmp = head;
		head = head->pun;
		delete tmp;
		return true;
	}

	//cancella se in mezzo alla lista
	elem* cursor = head;
		
	while(cursor != NULL and cursor->pun != NULL){
		if(strcmp(cursor->pun->nome, nome) == 0){
			elem* tmp = cursor->pun;
			cursor->pun = cursor->pun->pun;
			delete tmp;
			
			return true;
		}
		cursor = cursor->pun;
	}
	
	return false;
}
