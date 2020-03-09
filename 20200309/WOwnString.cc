#include <iostream>
#include <string.h>
using namespace std;

int main() {

	string sNapis01 = "Posiada";
	string sNapis01A = "Ulewaki";
	string sNapis02 = "Polewke";
	string sNapis02A = "Zupe";

	if (strlen(sNapis01) == strlen(sNapis01A)) cout << "Napisy maja taka sama dlugosc\n";

	if (strlen(sNapis01) == strlen(sNapis02A)) cout << "Napisy nie maja takiej samej dlugosci\n";

	sNapis01 = "Ala " + sNapis01;
	cout << "Polaczony string" << sNapis01 << endl;

	for (int i = 0; i <= strlen(sNapis02); i++) {
		if (i % 2 == 0) {
			sNapis02[i] = "0";
		}
	}

	return 0;
}
