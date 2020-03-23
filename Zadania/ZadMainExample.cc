/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.16
  * \brief: Testowanie funkcji i Extern
  * v0.01
*/


#include <iostream>
using namespace std;


void a() {cout<<"Funkcja a"<<endl;}
void b() {cout<<"Funkcja b"<<endl;}
void c() {cout<<"Funkcja c"<<endl;}

extern "C" {
	void cd() {cout<<"Funkcja cd w Extern C"<<endl;}
	void ce() {cout<<"Funkcja ce w Extern C"<<endl;}
}


int main(int argc, char *argv[]) {

	for (int i = 1; i < argc; i++) {
		switch(*argv[i]) {
			case 'a': a(); break;

			case 'b': b(); break;

			case 'c': c(); break;

			case 'd': cd(); break;

			case 'e': ce(); break;
		}
	}

	return 0;
}

