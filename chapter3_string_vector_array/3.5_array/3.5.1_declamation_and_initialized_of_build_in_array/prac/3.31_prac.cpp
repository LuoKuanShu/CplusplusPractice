#include <iostream>

using namespace std;

int main(void){
	constexpr size_t size = 10;
	int arr[size] = {};

	for (size_t i = 0;i < size;++i){
		arr[i] = i;
	}

	for (int i:arr){
		cout << i << " ";
	}
}
