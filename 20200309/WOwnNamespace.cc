#include <iostream>
using namespace std;

namespace moj {
	int iLiczba = 10; //uzywamy nazwy iliczba, pierwsza litera od typu zmiennej
}

int iLiczba = 25; //globalna

int main() {
	int iLiczba = 30; //lokalna

	cout << "Napisze lokalna: " << iLiczba << endl;
	cout << "Napisze globalna: " << moj::iLiczba << endl;

	return 0;
}
