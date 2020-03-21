/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.21
  * \brief: Testowanie funkcji i Extern
  * v0.01
*/


/* Program wykonałem drugi raz, ponieważ nie byłem pewien, jak do końca ma działać */


#include <iostream>
using namespace std;


void a() {
	cout << "Funkcja a" << endl;
}

void b() {
	cout << "Funkcja b" << endl;
}

void c() {
	cout << "Funkcja c" << endl;
}

extern "C" {

	void cd() {
		cout << "Funkcja cd w Extern C" << endl;
	}

	void ce() {
		cout << "Funkcja ce w Extern C" << endl;
	}
}


int main(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		switch (i) {
			case 1: a(); break;

			case 2: b(); break;

			case 3: c(); break;

			case 4: cd(); break;

			case 5: ce(); break;

			default: cout << "Brak argumentów" << endl; break;
		}
	}
	return 0;
}
