/**
  * \author: Kacper Gorgon
  * \date: 2020.05.03
  * \brief: Program pokazujacy korzystanie z unii
  * v0.01
*/


#include <iostream>
using namespace std;

int main() {

	union unia {
		int iU1;
		int iU2;
	};

	unia zadanie;
	cin >> zadanie.iU1;
	cin >> zadanie.iU2;

	// bierze tylko ostatni argument, mnozac go przez siebie
	cout << zadanie.iU2 << '*' << zadanie.iU2 << '=' << zadanie.iU1 * zadanie.iU2 << endl;

	return 0;
}
