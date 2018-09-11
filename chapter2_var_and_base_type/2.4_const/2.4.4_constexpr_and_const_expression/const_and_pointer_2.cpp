#include <iostream>

using namespace std;

int main(void){

	constexpr int *p = nullptr;
	int j = 1;

	constexpr const int i = 42;


	constexpr const int *ccp = &i;
	constexpr int *pl = &j;

}
