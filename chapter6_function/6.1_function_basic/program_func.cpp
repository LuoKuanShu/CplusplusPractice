#include <iostream>

using namespace std;

int fact(int val);

int main(void){

	int i = 0;

	cout << "enter a int number: " << endl;
	cin >> i;

	cout << "the reslut is " << fact(i) << endl;

}

int fact(int val) {
	int base = 1;

	while (val > 1){
		base *= val--;

	}

	return base;

}
