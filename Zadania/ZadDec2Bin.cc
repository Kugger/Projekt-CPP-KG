/**
  * \author: Kacper Gorgon
  * \date: 2020.04.19
  * \brief: Zmienia liczby z systemu decymalnego na system binarny
  * v0.01
*/


#include <iostream>
using namespace std;

int main() {

	int iLiczba = 0, iN = 0, iTab[31];

	cout << "Podaj liczbe decymalna: " << endl;
	cin >> iLiczba;

	while(iLiczba) {
		iTab[iN++] = iLiczba % 2;
		iLiczba = iLiczba / 2;
	}

	cout << "Liczba w systemie binarnym: " << endl;

	for(int i = iN - 1; i >= 0; i--) {
		cout << iTab[i];
	}

	cout << endl;

	return 0;
}
