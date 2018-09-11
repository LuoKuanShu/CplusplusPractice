#include <iostream>

using namespace std;

int main(void){
	int i = 1;
	const int ci = 4;

	int *pi = &i;
	cout << *pi << endl;

	//make pointer pi point to a const int object.
	/*
	pi = &ci;
	cout << *pi << endl;
	*/
	
	const int *pci;
	pci = &i;
	cout << " *pci is " << *pci << endl;
	*pci = *pci * 2; //read-only variable cannot be assigned.
	cout << "after *pci = *pci * 2, the i is "
		<< *pci << endl;


	pci = &ci;
	

}
