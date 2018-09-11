#include <iostream>

using namespace std;

int main(void){
	int arr[] = {1,3,5,5};

	int *p = arr;
	cout << *p << endl;
	++p;
	cout << *p << endl;
	
	//assign each element 
	int *beg = arr;
	int *end = &(arr[4]);
	
	while (beg !=  end){
		cout << *beg << " ";
		++beg;

	}

	


}
