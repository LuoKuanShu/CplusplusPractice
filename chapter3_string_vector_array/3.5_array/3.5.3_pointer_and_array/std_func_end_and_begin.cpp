#include <iostream>

using namespace std;


int main(void){
	int arr[] = {1,3,4,-4};

	int *beg = begin(arr);
	int *ends = end(arr);

	while (beg != ends&& *beg >= 0){
		++beg;

	}
	cout << *beg << endl;
}
