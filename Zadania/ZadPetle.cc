/**
  * \author: Kacper Gorgon
  * \date: 2020.05.03
  * \brief: Program pokazujacy dzialanie petli
  * v0.01
*/


#include <iostream>
using namespace std;

// While with i++
void whileipp(int iStart, int iKoniec) {

	int i = iStart;

	cout << "While with i++: " << endl;

	while (i++ < iKoniec) {
		cout << "Liczba: " << i << endl;
		if (i % 2 == 0) { continue; }
		if (i >= 50) { break; }
	}	
}

// While with ++i
void whileppi(int iStart, int iKoniec) {

	int i = iStart;

	cout << "While with ++i: " << endl;

	while (++i < iKoniec) {
		cout << "Liczba: " << i << endl;
		if (i % 2 == 0) { continue; }
                if (i >= 50) { break; }
	}
}

// Do-While with i++
void dowhileipp(int iStart, int iKoniec) {

	int i = iStart;

	cout << "Do-While with i++: " << endl;

	do {
		cout << "Liczba: " << i << endl;
		if (i % 2 == 0) { continue; }
                if (i >= 50) { break; }
	} while (i++ < iKoniec);
}

// Do-While with ++i
void dowhileppi(int iStart, int iKoniec) {

	int i = iStart;

	cout << "Do-While with ++i: " << endl;

        do {
                cout << "Liczba: " << i << endl;
                if (i % 2 == 0) { continue; }
                if (i >= 50) { break; }
        } while (++i < iKoniec);
}

// For with i++
void foripp(int iStart, int iKoniec) {

	int i = iStart;

	cout << "For with i++: " << endl;

	for (int i; i <= iKoniec; i++) {
		cout << "Liczba: " << i << endl;
                if (i % 2 == 0) { continue; }
                if (i >= 50) { break; }
	}
}

// For with ++i
void forppi(int iStart, int iKoniec) {

	int i = iStart;

	cout << "For with ++i: " << endl;

        for (int i; i <= iKoniec; ++i) {
                cout << "Liczba: " << i << endl;
                if (i % 2 == 0) { continue; }
                if (i >= 50) { break; }
        }

}

int main() {

	int iStart = 2, iKoniec = 10;

	whileipp(iStart, iKoniec);
	whileppi(iStart, iKoniec);
	dowhileipp(iStart, iKoniec);
	dowhileppi(iStart, iKoniec);
	foripp(iStart, iKoniec);
	forppi(iStart, iKoniec);

	return 0;
}
