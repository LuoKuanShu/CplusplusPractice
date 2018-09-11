#include <iostream>

using namespace std;

int main(void){
	int i = 42,*p = &i,&r = i;
	decltype(r + 0) b = 34;
	decltype( *p ) c = i;
  	decltype(( i )) ir = i;      
	/*
	cout << "i is "
		<< i << endl;
	c = 57;
	cout << " i is " 
		<< i << endl;
	*/

//	cout << r << endl;
	
	cout << "i is " 
		<< i << endl;
	ir = 1314;
	cout << " i is " 
		<< i << endl;
	cout << " ir is "
		<< ir << endl;
}
