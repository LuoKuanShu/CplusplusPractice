#include <iostream>

using namespace std;

int main(void){
	int i = 2;
	int i2 = 3;
	int *const pci = &i;
	
	cout << *pci << endl;
	//pci = &i2;  // cannot assign to a const varible with a non-const value.
	*pci = 24;
	cout << *pci << endl;


}
