//Jeder neue Begriff in der Fibonacci-Folge wird durch Addition der beiden vorherigen Bedingungen erzeugt. 
//Durch beginnend mit 1 und 2 werden die ersten 10 Begriffe sein
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//Durch die Berücksichtigung der Bedingungen in der Fibonacci-Folge, deren Werte nicht die vier Millionen überschreiten, find die Summe 

// ### Includes ###
#include <iostream>
#include <conio.h>
using namespace std;

// ### Variablen ###
int iPreNum1 = 2;
int iPreNum2 = 1;
int iPrevNum1B = 0;
int iCurrentNum = 0;
int iSum = 3;

// ### Funktionen ###


// ### Main ###
int main(){
	cout << "1" << endl
		<< "2" << endl;
	for(int i = 0; i < 4000000; i++){
		//cout << iPreNum2 << endl;
		//cout << iPreNum1 << endl;
		iCurrentNum = iPreNum1 + iPreNum2;
		iSum = iSum + iCurrentNum;
		//cout << iCurrentNum << endl;
		iPrevNum1B = iPreNum1;
		iPreNum1 = iCurrentNum;
		iPreNum2 = iPrevNum1B;
	}
	cout << iSum << endl;
	_getch();
	return 0;
}