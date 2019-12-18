#include <iostream>
using namespace std;

#ifndef COMPITO_H
#define COMPITO_H

struct node{
	int value;
	int index;
	node* next;
};

class VettoreSparso{
	private:		
		int dimension;

		node* head = NULL;
		int length = 0;
		
		node* makeNode(int, int, node*);
		
	public:
		VettoreSparso(int);
		bool set(int, int);
		
		friend ostream& operator<<(ostream& stream, VettoreSparso& v);
		void visualizzaComeDenso();
		bool reset(int);
		
		void operator*=(int);
		~VettoreSparso();
};

#endif
