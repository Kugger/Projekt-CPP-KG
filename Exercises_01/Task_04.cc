/**
  * \author: Kacper Gorgoń
  * \date: 2020.03.22
  * \brief: Funkcja wyswietlajaca miesiac i dzien z podanych liczb uzytkownika
  * v0.01
*/


#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
	string sMiesiac;
	string sDzien;
	int iMiesiac = 0;
	int iDzien = 0;

	cout << "Podaj numer miesiaca (od 1 do 12): ";
	cin >> iMiesiac;

	if (iMiesiac > 12) iMiesiac = iMiesiac % 12;

	switch (iMiesiac) {
		case 1: sMiesiac = "Styczen"; break;

		case 2: sMiesiac = "Luty"; break;

		case 3: sMiesiac = "Marzec"; break;

		case 4: sMiesiac = "Kwiecien"; break;

		case 5: sMiesiac = "Maj"; break;

		case 6: sMiesiac = "Czerwiec"; break;

		case 7: sMiesiac = "Lipiec"; break;

		case 8: sMiesiac = "Sierpien"; break;

		case 9: sMiesiac = "Wrzesien"; break;

		case 10: sMiesiac = "Pazdziernik"; break;

		case 11: sMiesiac = "Listopad"; break;

		case 12: sMiesiac = "Grudzien"; break;
	}

	cout << "Podaj numer dnia (od 1 do 7): ";
	cin >> iDzien;

	if (iDzien > 7) iDzien = iDzien % 7;

	switch (iDzien) {
		case 1: sDzien = "Poniedzialek"; break;

		case 2: sDzien = "Wtorek"; break;

		case 3: sDzien = "Sroda"; break;

		case 4: sDzien = "Czwartek"; break;

		case 5: sDzien = "Piatek"; break;

		case 6: sDzien = "Sobota"; break;

		case 7: sDzien = "Niedziela"; break;
	}

	cout << "Miesiac: " << sMiesiac << " " << "Dzien: " << sDzien << endl;

	return 0;
}
