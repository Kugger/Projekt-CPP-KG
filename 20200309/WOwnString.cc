/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.09
  * \brief: Sprawdzanie długości stringów
	    Łączenie stringów
	    Wymienianie co drugiej litery na '0'
  * v0.03
*/


#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;


int main() {

	/* Inicjalizacja zmiennych */
	string sNapis01 = "Posiada";
	string sNapis01A = "Ulewaki";

	string sNapis02 = "Polewke";
	string sNapis02A = "Zupe";

	string sNapis03 = "Ala miala czarnego kota ktorego nazywala Lovecraft";


	/* Porównywanie długości stringów */
	if (sNapis01.length() == sNapis01A.length()) cout << "1. Napisy maja taka sama dlugosc\n";

	if (sNapis01.length() != sNapis02A.length()) cout << "2. Napisy nie maja takiej samej dlugosci\n";


	/* Łączenie stringów */
	sNapis01 = "Ala " + sNapis01 + " " + sNapis02;
	cout << "Polaczony string: " << sNapis01 << endl;


	/* Wymiana co drugiej litery na '0' w stringu */
	for (int i = 0; i <= sNapis03.length(); i++) {
		if (isspace(sNapis03[i])) {
			sNapis03[i] = ' ';
			i++;
		}
		else if ((i+1) % 2 == 0) {
			sNapis03[i] = '0';
		}
	}
	cout << sNapis03 << endl;


	return 0;
}
