#ifndef PALAZZO_H
#define PALAZZO_H

#include <iostream>

class Palazzo{

	private:
		int MAX;
		int size;
		bool** m;
	
	public:
		Palazzo(int);
		Palazzo(const Palazzo&);
		~Palazzo();
		
		void cambia(int, int);
		void aggiungi();
		void stampa();
		
		int operator!();
		
		void operator%=(const Palazzo&);
};

#endif
