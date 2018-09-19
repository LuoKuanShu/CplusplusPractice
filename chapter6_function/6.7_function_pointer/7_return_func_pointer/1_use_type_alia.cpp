#include <iostream>

using namespace std;

using F = int (int*,int);   //F is a func.
using PF = int (*)(int*,int); // PF is a func pointer

int child(int *p,int i){
	cout << "in child(int*,int)" << endl;
	return 3;
}
F *returnF(){ 
	cout << "in returnF()" << endl; 
	return child;   //will cause force cast.
}

PF returnPF() { 
	cout << "in returnPF()" << endl; 
	return child;  //force cast
}

int main(void){
	int i = 7,*p = &i;
	
	auto funcP = returnPF();  //it's a func pointer.
	cout << funcP(p,i) << endl;

	cout << "**************************************" << endl;

	auto funcF = returnF();
	cout << funcF(p,i) << endl;

}