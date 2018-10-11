
#include <iostream>
#include <array>

using namespace std;



int main(void) {
	//init
	//
	//assign operator
	array<int,5> a1{0,1,2,3,4};
	array<int,5> a2;
	a2 = a1;
	a2 = {0,1,2,3,4};
	cout << "a2 is : " << endl;
	auto ibeg = a2.begin(),iend = a2.end();
	for (;ibeg  != iend;++ibeg) {
		cout << *ibeg << " ";

	}
	cout << endl;



}

