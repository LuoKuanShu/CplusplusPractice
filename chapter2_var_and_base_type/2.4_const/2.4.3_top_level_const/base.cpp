#include <iostream>

using namespace std;
int main(void){
	int i = 0;
	int *const pci = &i;
	const int ci = 42;
	const int *cpi = &ci;
	const int *const cpci = cpi;
	const int &r = ci;

	i = ci;

	cout << i << endl;
	
	cout << *cpi << endl;
	cpi = cpci; //the same low-level const.
	cout << *cpi << endl;

}
