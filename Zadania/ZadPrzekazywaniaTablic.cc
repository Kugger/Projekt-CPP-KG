#include <iostream>
using namespace std;

void przekazywanie(int iTab[], int iN) {

	for(int i = 0; i < iN; i++) {
		cout << iTab[i] << endl;
	}
}

int main() {

	int tab1[] = {1,2,3,4};
	przekazywanie(tab1, 4);

	return 0;
}
