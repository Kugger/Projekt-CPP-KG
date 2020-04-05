/**
  * \author: Kacper Gorgon
  * \date: 2020.03.30
  * \brief: Program pokazujacy kierunkowe adresowanie pamieci
  * v0.01
*/


#include <iostream>
using namespace std;

int main() {

	int i = 4, j = 6, k = 8;

	cout << "i = 4: " << &i << endl;

	cout << "k = 8: " << &k << endl;

	cout << "j = 6: " << &j << endl;

	return 0;
}
