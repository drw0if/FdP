#ifndef CINEMA_H
#define CINEMA_H

class Cinema{

	public:
		/* Methods */
		Cinema(int, int, const char*);
		bool prenota(char, int);
		bool cancella(char, int);
		void stampa();
		int quantiLiberi();
		bool prenotaAdiacenti(int);
		
	private:
		/* Attributes */
		char nome[31];
		int nFile;
		int nPosti;
		bool stato[26][9];
};

#endif
