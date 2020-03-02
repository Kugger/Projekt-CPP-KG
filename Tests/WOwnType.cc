//#include<stdio.h>
#include<iostream>
using namespace std;
typedef unsigned int MARK; // testujemy wlasne definiowanie typow zmiennych
typedef char WORD;

int main() {
	MARK fVarA;
	WORD fVarB[] = "Test";

	const float PI = 3.141592;

	fVarA = 86;

	cout << "fVarA: " << fVarA << endl;
	cout << "fVarB: " << fVarB << endl;
	cout << "PI: " << PI << endl;

	return 0;
}
