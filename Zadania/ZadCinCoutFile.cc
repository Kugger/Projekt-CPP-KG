#include <iostream>
#include <fstream>

using namespace std;

int main()
{
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
    return 0;

}
