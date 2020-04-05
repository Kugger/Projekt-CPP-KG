/**
  * \author: Kacper Gorgon
  * \date: 2020.03.30
  * \brief: Program sprawdza ponizsze operacje
  * v0.01
*/

#include <iostream>
using namespace std;

int main() {
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

	return 0;
}
