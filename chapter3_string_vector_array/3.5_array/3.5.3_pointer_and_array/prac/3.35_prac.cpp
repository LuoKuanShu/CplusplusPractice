#include <iostream>

using namespace std;

int main(void){
	constexpr size_t size = 3;
	int arr[size] = {1,2,3};

	int *p = begin(arr);

	while ( p != end(arr)){
		*p = 0;
		++p;
	}


	
	p = begin(arr);
	for (size_t s = 0; s != size;++s){
		cout << p[s] << " ";
	}
}

