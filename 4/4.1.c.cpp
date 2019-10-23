/*
 * 4.1, 4.1.ab con le chiamate a funzioni 
 */

#include <iostream>
using namespace std;

void stampaTriangoloRettangolo(){
	int n;
        cout << "Inserisci il lato: ";
        cin >> n;

        cout << "Triangolo rettangolo\n";
        for(int i = 0; i < n; i++){
                for(int j = 0; j <= i; j++)
                        cout << "*";
                cout << "\n";
        }
}

void stampaTriangoloRettangoloRov(){
	int n;
        cout << "Inserisci il lato: ";
	cin >> n;

        cout << "\nTriangolo rettangolo rovesciato\n";
        for(int i = 0; i < n; i++){
                for(int j = 0; j < i; j++)
                        cout << " ";
                for(int j = i; j < n; j++)
                        cout << "*";
                cout << "\n";
        }
}

void stampaTriangoloIsoscele(){
	int n;
	do{
                cout << "Inserisci il lato (dispari): ";
                cin >> n;
        }while(!(n & 1));

        cout << "Triangolo isoscele\n\n";
        int h = n/2 + 1;
        for(int i = 0; i < h; i++){
                for(int j = 0; j < i; j++)
                        cout << " ";
                for(int j = i; j < n-i; j++)
                        cout << "*";
                cout << "\n";
        }
}

void stampaTriangoloIsosceleRov(){
	int n;
	do{
                cout << "Inserisci il lato (dispari): ";
                cin >> n;
        }while(!(n & 1));

        cout << "\nTriangolo isoscele rovesciato\n";

        for(int i = 0; i < n; i++){
                for(int j = 0; j < i; j++)
                        cout << "*";
                cout << "\n";
        }
        for(int i = n; i > 0; i--){
                for(int j = 0; j < i; j++)
                        cout << "*";
                cout << "\n";
        }
}

int menu(){
        int choose;
        cout << "1: triangolo rettangolo\n";
        cout << "2: triangolo rettangolo rovesciato\n";
        cout << "3: triangolo iscoscele\n";
	cout << "4: triangolo isoscelere rovesciato\n";
        cout << "0: esci\n";

        do{
                cout << "Scegli: ";
                cin >> choose;
        }while(choose < 0 || choose > 4);

        return choose;
}

int main(int argn, char** argv){
	while(true){
                switch(menu()){
                        case 0: cout << "Bye bye"; return 0;
                        case 1: stampaTriangoloRettangolo(); cout << "\n\n"; break;
                        case 2: stampaTriangoloRettangoloRov(); cout << "\n\n"; break;
                        case 3: stampaTriangoloIsoscele(); cout << "\n\n"; break;
                        case 4: stampaTriangoloIsosceleRov(); cout << "\n\n"; break;
                }
        }

	return 0;
}
