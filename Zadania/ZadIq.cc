/**
  * \author: Kacper Gorgon
  * \date: 2020.03.30
  * \brief: Program obrazujacy mozliwosc korzystania z iteracji po tablicy?
  * v0.01
*/


#include <iostream>
using namespace std;

int main() {
	int tab[] = {11,22,33,44,55}, i = 3, *p, *q;

	q = tab;

	cout << "q	= " << q << endl;
	cout << "i[q]	= " << i[q] << endl;
	i++;
	cout << "*(i+q)	= " << *(i+q) << endl;

	// Dzieje sie tak poniewaz, deklarujac "i" korzystamy z klasy

	return 0;
}
