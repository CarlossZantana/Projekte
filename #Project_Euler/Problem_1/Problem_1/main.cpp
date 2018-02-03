// ### Includes ###
#include <iostream>
#include <conio.h>
using namespace std;

// ### Variablen ###


// ### Funktionen ###
int iZahlDrei = 0;
int iZahlFunf = 0;
int iZahlFZehn = 0;
int k = 0;
int	b = 0;
int c = 0;

// ### Main ###
int main(){
	for(int i = 1; k < 333; i++){
		iZahlDrei = iZahlDrei + (i * 3);		
		k = k + 1;
	}
	for(int i = 1; b < 199; i++){
		iZahlFunf = iZahlFunf + (i * 5);		
		b = b + 1;
	}
	for(int i = 1; c < 66; i++){
		iZahlFZehn = iZahlFZehn + (i * 15);	
		c = c + 1;
	}
	cout << iZahlDrei + iZahlFunf - iZahlFZehn << endl;
	_getch();
	return 0;
}