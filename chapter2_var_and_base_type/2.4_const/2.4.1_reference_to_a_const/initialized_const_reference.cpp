#include <iostream>

using namespace std;

int main(void){

	int i = 0;
	const int ci = 0;
	double d =  0;

	int &ri = i;

	//the type of value referenced by a non-const reference  is not same as the type of initial value.
	//double &rd = i;
	
	const int &rci = i;
	const int &rci2 = d;
	
	cout << rci + 1 << " " 
		<< rci2 + 1 << endl;

}
