/**
  * \author: Kacper Gorgon
  * \date: 2020.04.19
  * \brief: Zmienia liczby z systemu binarnego na system decymalny
  * v0.01
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int iLiczba, iN = 0, iWynik = 0, iTemp = 0;

	cout << "Podaj liczbe w systemie binarnym: " << endl;
	cin >> iLiczba;

	while (iLiczba != 0) {
		iTemp = iLiczba % 10;
		iWynik += (iTemp * pow(2, iN));
		iN++;
		iLiczba = iLiczba / 10;
	}

	cout << "Liczba w systemie dziesietnym: " << endl;
	cout << iWynik << endl;

	return 0;
}
