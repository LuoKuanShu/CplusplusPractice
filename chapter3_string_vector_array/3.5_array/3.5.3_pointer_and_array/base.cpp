#include <iostream>

using namespace std;

int arr[3] = {1,2,3};

int main(void){
	int *pi = &arr[0];
	cout << *pi << endl;

	int *pi2 = arr;
	cout << *pi2 << endl;

	auto p(arr);
	cout << *p << endl;

	decltype(arr) p2 = {1,2,3};
	cout <<  "p2 is: " 
		<< p2[2] << endl;

}
