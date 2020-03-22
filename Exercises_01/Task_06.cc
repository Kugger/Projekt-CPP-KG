/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.22
  * \brief: Funkcja tworzaca trojkat rownoboczny w zaleznosci od podanego n
  * v0.01
*/


#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>
using namespace std;


int main() {

	int n = 0;

	cout << "Podaj nieparzyste n: ";
	cin >> n;

	if (n % 2 == 0) {cout << "Podano bledne dane!" << endl;}
	else {

		for (int k = 1; k <= (n/2) + 1; k++) {
			for (int j = 1; j <= n - k; j++)
				cout << ' ';
			for (int i = 1; i <= 2 * k -1; i++)
				cout << '*';
			cout << endl;
		}
	}

	return 0;
}
