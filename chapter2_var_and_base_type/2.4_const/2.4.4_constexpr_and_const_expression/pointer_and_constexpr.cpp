#include <iostream>

using namespace std;

int main(void){
	constexpr const int i = 2;
	const int ci = 3;

	constexpr int *pci = &i;
	cout << *pci << endl;
	
}
