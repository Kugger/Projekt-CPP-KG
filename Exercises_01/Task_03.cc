
/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.21
  * \brief: Funkcja do obliczania pola i obwodu kwadratu, prostokata, trojkata, kola i trapezu
  * v0.01
*/

#include <iostream>
#include <string>
#include <ctype.h>
#include <math.h> 
using namespace std;

float fBokA = 0;
float fBokB = 0;
float fBokC = 0;
float fBokD = 0;
float fWysokosc = 0;
float fPromien = 0;

float fPole = 0;
float fObwod = 0;

string sFigura;

int main() {

	cout << "Podaj figure. Do wyboru masz: Kwadrat, Prostokat, Trojkat, Kolo i Trapez." << endl;
	cin >> sFigura;

	if (sFigura == "Kwadrat") {
		cout << "Podaj dlugosc boku: ";
		cin >> fBokA;

		if (fBokA <= 0) {cout << "Podano bledne dane!" << endl;}
		else { cout << "Pole: " << fBokA * fBokA << " " << "Obowd: " << fBokA * 4 << endl;}
	}

	if (sFigura == "Prostokat") {
		cout << "Podaj dlugosc boku A: ";
		cin >> fBokA;
		cout << "Podaj dlugosc boku B: ";
		cin >> fBokB;

		if (fBokA <= 0 && fBokB <= 0) {cout << "Podano bledne dane!" << endl;}
		else {cout << "Pole: " << fBokA * fBokB << " " << "Obwod: " << 2 * fBokA + 2 * fBokB << endl;}
	}

	if (sFigura == "Trojkat") {
		cout << "Podaj dlugosc boku A: ";
		cin >> fBokA;
		cout << "Podaj dlugosc boku B: ";
		cin >> fBokB;
		cout << "Podaj dlugosc boku C: ";
		cin >> fBokC;

		if (fBokA <= 0 && fBokB <= 0 && fBokC <= 0 && fBokA > fBokB + fBokC && fBokB > fBokC + fBokA && fBokC > fBokA + fBokB) {
			cout << "Podano bledne dane!" << endl;
		}
		else {
			float p = (fBokA + fBokB + fBokC) / 2;
			cout << "Pole: " << sqrt( p * (p - fBokA) * (p - fBokB) * (p - fBokC) ) << " " << "Obwod: " << fBokA + fBokB + fBokC << endl;
		}
	}

	if (sFigura == "Kolo") {
		cout << "Podaj dlugosc promienia: ";
		cin >> fPromien;

		if (fPromien <= 0) {cout << "Podano bledne dane!" << endl;}
		else {cout << "Pole: " << M_PI * (fPromien * fPromien) << " " << "Obwod: " << 2 * M_PI * fPromien << endl;}
	}

	if (sFigura == "Trapez") {
		cout << "Podaj dlugosc boku A: ";
		cin >> fBokA;
		cout << "Podaj dlugosc boku B: ";
		cin >> fBokB;
		cout << "Podaj dlugosc boku C: ";
		cin >> fBokC;
		cout << "Podaj dlugosc boku D: ";
		cin >> fBokD;

		if (fBokA <= 0 && fBokB <= 0 && fBokC <= 0 && fBokD <= 0 && abs(fBokD - fBokC) < abs(fBokB - fBokA) < fBokD + fBokC) {
			cout << "Podano bledne dane!" << endl;
		}
		else {
			fWysokosc = sqrt(((-1 * fBokA) + fBokB + fBokC + fBokD) * (fBokA - fBokB + fBokC + fBokD) * (fBokA - fBokB + fBokC - fBokD) * (fBokA - fBokB - fBokC + fBokD)) / (2 * abs(fBokB - fBokA));
			cout << "Pole: " << ((fBokA + fBokB) / 2) * fWysokosc << " " << "Obwod: " << fBokA + fBokB + fBokC + fBokD << endl;
		}
	}

	return 0;
}
