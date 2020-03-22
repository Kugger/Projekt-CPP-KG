/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.22
  * \brief: Funkcja losuje 100 liczb po czym podaje minimum, maksimum, sume liczb parzystych i nieparzystych
  * v0.01
*/


#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {

	int iLiczba, iSumaP = 0, iSumaN = 0, iMin, iMax;
	srand(time(NULL));
	iLiczba = rand() % 1000000 + 1;
	iMin = iLiczba;
	iMax = iLiczba;

	for (int i = 0; i < 100; i++) {
		iLiczba = rand() % 1000000 + 1;

		if (iLiczba < iMin) {iMin = iLiczba;}
		if (iLiczba > iMax) {iMax = iLiczba;}

		if (iLiczba % 2 == 0) {iSumaP = iSumaP + iLiczba;}
		else {iSumaN = iSumaN + iLiczba;}
	}

	cout << "Najwieksza wartosc to " << iMax
	<< ", najmniejsza wartosc to " << iMin
	<< ", suma wszystkich liczb parzystych to " << iSumaP
	<< ", suma wszystkich liczb nieparzystych to " << iSumaN << endl;

	return 0;
}
