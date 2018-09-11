#include <iostream>
#include <iostream>

using namespace std;

int main(void){
	const int ci = 0,&cj = ci;
	decltype(ci) x = 0;
	decltype(cj) y = x;
	decltype(cj) z;

	auto ax = ci;
	//x = 4;
	//ax = 5; 
	//y = 5;	

}
