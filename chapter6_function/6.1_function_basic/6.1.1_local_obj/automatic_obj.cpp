#include <iostream>

using namespace std;

void test(int _i);

int main(void){
	test(9);
	
	cout << "_i in out is " << _i << endl;
	cout << "localV in out is " << localV << endl;

}

void test(int _i){
	int localV = 10;
	
	cout << "_i is " << _i << endl;
	cout << "localV is " << localV << endl;

}
