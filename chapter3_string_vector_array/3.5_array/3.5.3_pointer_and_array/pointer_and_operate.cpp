#include <iostream>

using namespace std;

int arr[11];
int main(void){
	int i = 0;

	int *pbeg = begin(arr),*pend = end(arr);

	while (cin >> i){
		int index = (i / 10) - (begin(arr) - pbeg);
		++(*(pbeg + index));

	}

	for (int ai : arr){
		cout << ai << " ";

	}

}
