#include <iostream>
#include "compito.h"
using namespace std;

VettoreSparso::VettoreSparso(int d){
	if(d <= 0) d = 10;
	dimension = d;
}

node* VettoreSparso::makeNode(int v, int i, node* next){
	node* tmp = new node;
	tmp->value = v;
	tmp->index = i;
	tmp->next = next;
	
	return tmp;
}

bool VettoreSparso::set(int v, int i){
	if(i < 0 || i >= dimension) 		return false;
	if(v == 0 || length == dimension) 	return false;
	
	if(head == NULL){
		head = makeNode(v, i, NULL);
		length++;
		return true;
	}
	
	if(head->index > i){	
		head = makeNode(v, i, head);
		length++;
		return true;
	}
	
	node* cursor = head;
	while(cursor->next != NULL && cursor->index < i && cursor->next->index <= i)
		cursor = cursor->next;

	if(cursor->index == i){
		cursor->value = v;
		return true;
	}
	
	cursor->next = makeNode(v, i, cursor->next);
	length++;
	return true;
}

ostream& operator<<(ostream& stream, VettoreSparso& v){
	stream << "[" << v.dimension << "]{";
	
	node* cursor = v.head;
	while(cursor != NULL){
		stream << "(" << cursor->value << "," << cursor->index << ")";
		cursor = cursor->next;
	}
	
	stream << "}\n";
	
	return stream;
}

void VettoreSparso::visualizzaComeDenso(){
	cout << "< ";
	node* cursor = head;
	for(int i = 0; i < dimension; i++){
		if(cursor != NULL and i == cursor->index){
			cout << cursor->value << " ";
			cursor = cursor->next;
		}
		else cout << "0 ";
	}
	cout << ">";
}

bool VettoreSparso::reset(int index){
	if(head == NULL) return false;
	
	node* cursor = head;
	if(cursor->index == index){
		head = cursor->next;
		length--;
		delete cursor;
		return true;
	}

	while(cursor->next != NULL){
		if(cursor->next->index == index){
			node* tmp = cursor->next;
			cursor->next = cursor->next->next;
			length--;
			delete tmp;
			return true;
		}
		cursor = cursor->next;
	}
	return false;
}

void VettoreSparso::operator*=(int k){
	node* cursor = head;

	if(k == 0){
		node* tmp;
		while(cursor != NULL){
			tmp = cursor;
			cursor = cursor->next;
			delete tmp;
		}
		head = NULL;
		length = 0;
		return;
	}
	
	while(cursor != NULL){
		cursor->value *= k;
		cursor = cursor->next;
	}
}

VettoreSparso::~VettoreSparso(){
	node* cursor = head;
	node* tmp;

	while(cursor != NULL){
		node* tmp = cursor;
		cursor = cursor->next;
		delete tmp;
	}
}
