/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.23
  * \brief: Przeciazanie funkcji w kompilatorach gcc i g++
  * v0.01
*/


// gcc WOwnPrzeciazanieFunkcji.cc -o WOwnPrzeciazanieFunkcji ERROR
// g++ WOwnPrzeciazanieFunkcji.cc -o WOwnPrzeciazanieFunkcji WORK

#include <iostream>
using namespace std;

void funkcja(int a, int b) {

	cout << "Funkcja int" << endl;
	int wynik = a + b;
	cout << wynik << endl;
}

void funkcja(double a, double b) {

	cout << "Funkcja double" << endl;
	double wynik = a + b;
	cout << wynik << endl;
}

int main() {

	funkcja(2, 2);
	funkcja(2.1111, 2.2222);
	return 0;
}
