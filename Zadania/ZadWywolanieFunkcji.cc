/**
  * \author: Kacper Gorgon
  * \date: 2020.04.19
  * \brief: Inny sposob wywolania funkcji
  * v0.01
*/


#include <iostream>
using namespace std;

void funA() {
	cout << "Funkcja A" << endl;
}

void funB() {
	cout << "Funkcja B" << endl;
}

int main(int argc, char* argv[]) {

	for(int i = 1; i < argc; i++) {
		switch(*argv[i]) {
			case 'A': funA(); break;
			case 'B': funB(); break;
		}
	}

	return 0;
}
