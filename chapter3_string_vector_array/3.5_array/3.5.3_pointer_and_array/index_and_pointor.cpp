#include <iostream>

using namespace std;

int arr[11];
int main(void){
	int grade = 0;

	while (cin >> grade){
		if ( begin(arr) + grade/10 < end(arr)){
			int *pbeg = begin(arr); //every time it is new.
			++(pbeg[grade/10]);
		}

	}

	for (int ai : arr){
		cout << ai << " ";
	}

}
