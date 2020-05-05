#ifndef ZAD_KCPP_H
#define ZAD_KCPP_H

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <cstring>
#include "zadania.h"

using namespace std;

void a() {cout<<"Funkcja a"<<endl;}
void b() {cout<<"Funkcja b"<<endl;}
void c() {cout<<"Funkcja c"<<endl;}

extern "C" {
	void cd() {cout<<"Funkcja cd w Extern C"<<endl;}
	void ce() {cout<<"Funkcja ce w Extern C"<<endl;}
}

void zadania::ZadAdresowaniePamieci() {

	int i = 4, j = 6, k = 8;

	cout << "i = 4: " << &i << endl;

	cout << "k = 8: " << &k << endl;

	cout << "j = 6: " << &j << endl;

}

void zadania::ZadArytmetykaWskaznikow() {

	int tab[] = {11,22,33,44,55,66,77,88,99}, *p;

	p = &tab[0];
	cout << "p	= " << *p << endl;

	p++;
	cout << "p++	= " << *p << endl;

	++p;
	cout << "++p	= " << *p << endl;

	++*p;
	cout << "++*p	= " << *p << endl;

	++(*p);
	cout << "++(*p)	= " << *p << endl;

	++*(p);
	cout << "++*(p)	= " << *p << endl;

	*p++;
	cout << "*p++	= " << *p << endl;

	(*p)++;
	cout << "(*p)++	= " << *p << endl;

	*(p)++;
	cout << "*(p)++	= " << *p << endl;

	*++p;
	cout << "*++p	= " << *p << endl;

	*(++p);
	cout << "*(++p)	= " << *p << endl;

}

void zadania::ZadDin2Dec() {

	int iLiczba, iN = 0, iWynik = 0, iTemp = 0;

	cout << "Podaj liczbe w systemie binarnym: " << endl;
	cin >> iLiczba;

	while (iLiczba != 0) {
		iTemp = iLiczba % 10;
		iWynik += (iTemp * pow(2, iN));
		iN++;
		iLiczba = iLiczba / 10;
	}

	cout << "Liczba w systemie dziesietnym: " << endl;
	cout << iWynik << endl;

}

void zadania::ZadCandCPP() {

	// Output in C
	printf("Output in C");
	printf("\n");

	// Output in C++
	cout << "Output in C++"
	<< endl;

	// String output in C
	char sCOut[100] = "String output in C";
	printf("%s", sCOut);
	printf("\n");

	// String output in C++
	string sCppOut = "String output in C++";
	cout << sCppOut << endl;

	// Int output in C
	printf("%i\n", 35);
	printf("%x\n", 35);
	printf("%f\n", 35.2);

	// Int output in C++
	cout << 35 << endl;
	cout << hex << 35 << endl;
	cout << 35.2 << endl;

}

void zadania::ZadCinCoutFile() {

	string sTekst;
    	string sLinia;
    	ofstream plik;
    	ifstream odczyt;

    	cout << "Podaj tekst: " << endl;
    	getline(cin, sTekst);

    	cout << "Podales: "<< sTekst << endl;
    	plik.open("test.txt");
    	plik << sTekst << endl;
    	plik.close();

    	odczyt.open("test.txt");
    	getline(odczyt, sLinia);
    	cout << "Z pliku odczytano: " << sLinia << endl;
    	odczyt.close();

}

void zadania::ZadDec2Bin() {

	int iLiczba = 0, iN = 0, iTab[31];

	cout << "Podaj liczbe decymalna: " << endl;
	cin >> iLiczba;

	while(iLiczba) {
		iTab[iN++] = iLiczba % 2;
		iLiczba = iLiczba / 2;
	}

	cout << "Liczba w systemie binarnym: " << endl;

	for(int i = iN - 1; i >= 0; i--) {
		cout << iTab[i];
	}

	cout << endl;

}

void zadania::ZadIq() {

	int tab[] = {11,22,33,44,55}, i = 3, *p, *q;

	q = tab;

	cout << "q	= " << q << endl;
	cout << "i[q]	= " << i[q] << endl;
	i++;
	cout << "*(i+q)	= " << *(i+q) << endl;

	// Dzieje sie tak poniewaz, deklarujac "i" korzystamy z klasy

	return 0;

}

void zadania::ZadMainExample(int argc, char *argv[]) {

	for (int i = 1; i < argc; i++) {
		switch(*argv[i]) {
			case 'a': a(); break;

			case 'b': b(); break;

			case 'c': c(); break;

			case 'd': cd(); break;

			case 'e': ce(); break;
		}
	}
}

void zadania::ZadMainExample2(int argc, char *argv[]) {

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
}

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

void zadania::ZadPetle() {

	int iStart = 3, iKoniec = 10;

	whileipp(iStart, iKoniec);
	whileppi(iStart, iKoniec);
	dowhileipp(iStart, iKoniec);
	dowhileppi(iStart, iKoniec);
	foripp(iStart, iKoniec);
	forppi(iStart, iKoniec);

}

void zadania::ZadPriorytetyOperatorow() {

	int x = 1, y = 2, z = 3;
	int result[] = {4,4,4,4};

	result[0] *= -++x*x--+-y--%++z;
	cout << "0. " << result[0] << endl;

	result[1] *= -(++x)*(x--)+-(y--)%(++z);
	cout << "1. " << result[1] << endl;

	result[2] *= (-(++x))*(x--)+(-(y--))%(++z);
	cout << "2. " << result[2] << endl;

	result[3] *= ((-(++x))*(x--))+((-(y--))%(++z));
	cout << "3. " << result[3] << endl;

}

void przekazywanie(int iTab[], int iN) {

	for(int i = 0; i < iN; i++) {
		cout << iTab[i] << endl;
	}
}

void zadania::ZadPrzekazywaniaTablic() {

	int tab1[] = {1,2,3,4};
	przekazywanie(tab1, 4);

	return 0;

}

int finder(string sNapis) {

	string tab[] = {"Contra", "Portal", "Overwatch"};

	for (int i = 0; i < 3; i++) {
		if (sNapis == tab[i])
			return i;
	}
	return -1;
}

void zadania::ZadSwitch() {

	string sDane;
	cout << "Podaj nazwe gry, by poznac date wydania:\n[Contra], [Portal], [Overwatch]:" << endl;
	cin >> sDane;
	int i = finder(sDane);

	switch(i) {
		case 0:
			cout << "Gra wyszla w 1987."; break;
		case 1:
			cout << "Gra wyszla w 2007."; break;
		case 2:
			cout << "Gra wyszla w 2016."; break;
		default:
			cout << "Brak informacji - Bledne dane!"; break;
	}

}

void zadania::ZadUnia() {

	union unia {
		int iU1;
		int iU2;
	};

	unia zadanie;
	cin >> zadanie.iU1;
	cin >> zadanie.iU2;

	// bierze tylko ostatni argument, mnozac go przez siebie
	cout << zadanie.iU2 << '*' << zadanie.iU2 << '=' << zadanie.iU1 * zadanie.iU2 << endl;

}

void funA() {
	cout << "Funkcja A" << endl;
}

void funB() {
	cout << "Funkcja B" << endl;
}

void ZadWywolanieFunkcji(int argc, char *argv[]) {

	for(int i = 1; i < argc; i++) {
		switch(*argv[i]) {
			case 'A': funA(); break;
			case 'B': funB(); break;
		}
	}

}

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

void zadanie::ZadZwracanie() {

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

}

int main() {

	zadania test;
	test.ZadArytmetykaWskaznikow();
	return 0;

}
