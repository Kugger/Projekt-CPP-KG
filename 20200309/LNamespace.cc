/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przestrzenie nazw w C++
 * v0.01
 */

#include <iostream>
using namespace std; //ukrywamy namespace

namespace nasza {
	int k;
	int l = 7;
}
using namespace nasza; //niebezpieczenstwo, bo nie wiadomo, ktorego namespace uzywamy

int main(){
	std::cout << "Test" << std::endl;
	//cout << "Test" << endl;

  int k = 7;
  nasza::k; //nie mamy pewnosci, ze tutaj bedzie 0, wiec lepiej zainicjowac
  cout << nasza::k << endl; //0
  cout << k << endl; //7

  int l = 9;
  cout << nasza::l << endl; //7
  cout << l << endl; //9

	return 0;
}
