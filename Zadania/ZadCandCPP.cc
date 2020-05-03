/**
  * \author: Kacper Gorgon
  * \date: 2020.05.03
  * \brief: Program pokazujacy roznice miedzy jezykiem C i C++
  * v0.01
*/


#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main() {

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

	return 0;
}
