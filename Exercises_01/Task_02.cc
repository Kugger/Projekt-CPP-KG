/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.21
  * \brief: Funkcja obliczajaca sume, roznice, iloczyn i iloraz z podanych liczb i dokladnosci przez uzytkownia
  * v0.01
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <ctype.h>
using namespace std;

float fLiczbaA = 0;
float fLiczbaB = 0;
float fWynik = 0;
int n = 0;
string sOperacja;

int main() {

	cout << "Podaj liczbe A: ";
	cin >> fLiczbaA;
	cout << "Podaj liczbe B: ";
	cin >> fLiczbaB;

	cout << "Podaj operacje. Do wyboru: Suma, Roznica, Iloczyn, Iloraz." << endl;
	cin >> sOperacja;

	if (sOperacja == "Suma" || sOperacja == "+") fWynik = fLiczbaA + fLiczbaB;

	if (sOperacja == "Roznica" || sOperacja == "-") fWynik = fLiczbaA - fLiczbaB;

	if (sOperacja == "Iloczyn" || sOperacja == "*") fWynik = fLiczbaA * fLiczbaB;

	if (sOperacja == "Iloraz" || sOperacja == "/") fWynik = fLiczbaA / fLiczbaB;

	cout << "Podaj dokladnosc do n miejsc po przecinku. n = ";
	cin >> n;

	std::cout << std::fixed << std::setprecision(n) << "Wynik: " << fWynik << endl;

	return 0;
}
