//Jeder neue Begriff in der Fibonacci-Folge wird durch Addition der beiden vorherigen Bedingungen erzeugt. 
//Durch beginnend mit 1 und 2 werden die ersten 10 Begriffe sein
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//Durch die Berücksichtigung der Bedingungen in der Fibonacci-Folge, deren Werte nicht die vier Millionen überschreiten, find die Summe 

// ### Includes ###
#include <iostream>
#include <conio.h>
using namespace std;

// ### Variablen ###
int a = 1;
int b = 2;
int c = NULL;

// ### Funktionen ###
int add(){

	return c;
}

// ### Main ###
int main(){
	for (int i = 0; c < 4000000; i++){
		c = a + b;
		a = b;
		b = c;
		cout << a << " + " << b << " = " << c << endl;
	}
	_getch();
	return 0;
}