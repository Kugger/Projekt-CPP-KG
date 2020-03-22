/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.22
  * \brief: Funkcja wyswietlajaca tyle * ile podamy n
  * v0.01
*/


#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
	int n = 0;

	cout << "Podaj n: ";
	cin >> n;

	for (int i = 0; i < n; i++)
		cout << '*';

	cout << endl;

	return 0;
}
