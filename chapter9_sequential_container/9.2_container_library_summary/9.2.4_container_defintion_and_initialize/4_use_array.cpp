\
#include <iostream>
#include <array>

using namespace std;

int main(void) {

	//for array,the size also is part of type.
	array<int,10> a1; //ten 0
	array<int,10> a2{0,1,3}; //others is 0
	array<int,10> a3{42}; //a 42,others is 0
	
	//int digs[2] {1,2};
	//int dig2[2] = digs; //error,buitin-type array not support copy
	
	array<int,4> a4{1,2};
	array<int,4> a5 = a4;
}
