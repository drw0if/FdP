#include "compito.h"
#include <iostream>
#include <cstring>

Cinema::Cinema(int nFile, int nPosti, const char* nome){
	
	strncpy(this->nome, nome, 30);
	this->nPosti = nPosti;
	this->nFile = nFile;

	for(int i = 0; i < nFile; i++)
		for(int j = 0; j < nPosti; j++)
			this->stato[i][j] = false;

}

bool Cinema::prenota(char fila, int posto){
	fila = fila - 'A';
	posto--;
	
	if(stato[fila][posto]) return false;
	stato[fila][posto] = true;

	return true;
}

bool Cinema::cancella(char fila, int posto){
	fila = fila - 'A';
	posto--;
	
	if(!stato[fila][posto]) return false;
	stato[fila][posto] = false;
	
	return true;
}

void Cinema::stampa(){

	std::cout << "Nome del cinema: " << nome << std::endl;
	
	std::cout << " ";
	for(int i = 0; i < nPosti; i++) std::cout << i;
	
	std::cout << std::endl;
	
	for(int i = 0; i < nFile; i++){
		std::cout << (char)(i+'A');
		for(int j = 0; j < nPosti; j++)
			std::cout << ((stato[i][j]) ? "*" : " ");
		std::cout << std::endl;
	}

}

int Cinema::quantiLiberi(){

	int ans = 0;
	for(int i = 0; i < nFile; i++)
		for(int j = 0; j < nPosti; j++)
			if(!stato[i][j]) ans++;

	return ans;
}

bool Cinema::prenotaAdiacenti(int k){
	
	int score = 0;
	
	for(int i = 0; i < nFile; i++){
		score = 0;
		for(int j = 0; j < nPosti; j++){
			if(!stato[i][j]) score++;
			else score = 0;
			
			if(score == k){
				for(int y = 0; y < k; y++)
					stato[i][j-y] = true;
				return true;
			}
		}
	}
	
	return false;
}
