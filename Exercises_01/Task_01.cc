/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.21
  * \brief: Program wyswietli wartosc bezwzgledna z podanej przez uzytkownika liczby
  * v0.01
*/

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {

	string sliczba;
	int iflag = 0;
	int idot = 0;
	int ipause = 0;

	cout << "Podaj liczbe: ";
	cin >> sliczba;

	for (int i = 0; i < sliczba.length(); i++) {
		if (sliczba[i] != '-' || sliczba[i] != '.' && !isdigit(sliczba[i])) {
			iflag = 0;
		}
		else {
			iflag = 1;
		}
	}

	for (int i = 0; i < sliczba.length(); i++) {
		if (sliczba[i] == '-')
			ipause++;
		if (sliczba[i] == '.')
			idot++;
	}

	if (idot >= 2) iflag = 1;

	if (ipause >= 2) iflag = 1;

	if (sliczba[0] == '0' && sliczba.length() == 1) iflag = 0;

	if (sliczba[0] == '-') {
		for (int i = 1; i < sliczba.length() + 1; i++) {
			sliczba[i-1] = sliczba[i];
		}
	}

	if (iflag == 0) {
		cout << "Wartosc bezwzgledna podanej liczby wynosi: " << sliczba << endl;
	}
	else {
		cout << "Podane bledne wartosci!" << endl;
	}

	return 0;
}
