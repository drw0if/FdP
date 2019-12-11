#include "compito.h"
#include <iostream>

Palazzo::Palazzo(int n){
	MAX = (n < 0) ? 1 : n;

	size = 1;
	m = new bool*[MAX];

	for(int i = 1; i < MAX; i++)
		m[i] = NULL;
	
	m[0] = new bool[1];
	m[0][0] = false;
}

Palazzo::Palazzo(const Palazzo& p){
	MAX = p.MAX;
	size = p.size;
	m = new bool*[MAX];
	
	for(int i = 0; i < MAX; i++){
		if(p.m[i] != NULL){
			m[i] = new bool[i+1];
			for(int j = 0; j <= i; j++)
				m[i][j] = p.m[i][j];
		}
		else m[i] = NULL;
	}
}

Palazzo::~Palazzo(){
	for(int i = 0; i < size; i++)
		delete m[i];
		
	delete m;
}

void Palazzo::aggiungi(){
	if(size == MAX) return;
	
	m[size] = new bool[size+1];

	for(int i = 0; i <= size; i++)
		m[size][i] = false;

	size++;
}

void Palazzo::stampa(){
	std::cout << "<" << size << ">" << std::endl;
	for(int i = 0; i < size; i++){
		std::cout << "Piano " << i+1 << ": ";
		for(int j = 0; j <= i; j++){
			std::cout << ((m[i][j]) ? "Aperta " : "Chiusa ");
		}
		std::cout << std::endl;
	}	
}

void Palazzo::cambia(int i, int j){
	i--;
	j--;
	if(j > i) return;
	if(i >= size) return;
	
	m[i][j] = !m[i][j];
}

int Palazzo::operator!(){
	int ans = 0;
	for(int i = 0; i < size; i++)
		for(int j = 0; j <= i; j++)
			if(m[i][j]) ans++;
			
	return ans;
}

void Palazzo::operator%=(const Palazzo& p){
	if(p.size != size) return;
	
	for(int i = 0; i < size; i++)
		for(int j = 0; j <= i; j++)
			if(!p.m[i][j]) m[i][j] = false;
}

