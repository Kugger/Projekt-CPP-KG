#include <iostream>
using namespace std;

int wartosc(int a) {

	return a;
}

int &referencja(int &a) {

	return a;
}

int *wskaznik(int a) {

	a = a++;
	int *temp = &a;
	return temp;
}


int *tablica(int tab[], int size) {

	for(int i = 0; i < size; i++) {
		tab[i] = i;
	}
	return tab;
}


int main() {

	int a = 2;
	int tab[6];

	cout << "Wartosc: " << wartosc(a) << endl;
	cout << "Referencja: " << referencja(a) << endl;
	cout << "Wskaznik: " << *wskaznik(a) << endl;

	tablica(tab, 6);
	for(int i = 0; i < 6; i++) {
		cout << tab[i] << ", ";
	}
	cout << endl;

	return 0;
}
