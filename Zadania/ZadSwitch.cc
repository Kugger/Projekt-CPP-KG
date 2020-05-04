/**
  * \author: Kacper Gorgon
  * \date: 2020.05.03
  * \brief: Program uzywajacy calego stringa do switcha
  * v0.01
*/


#include <iostream>
#include <cstring>
using namespace std;

int finder(string sNapis) {

	string tab[] = {"Contra", "Portal", "Overwatch"};

	for (int i = 0; i < 3; i++) {
		if (sNapis == tab[i])
			return i;
	}
	return -1;
}

int main() {

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

	return 0;
}
