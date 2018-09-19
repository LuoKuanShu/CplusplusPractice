#include <iostream>

using namespace std;

//func returned
int print(int){
	cout << "in func(int)." << endl;
	cout << "hello world." << endl;
	return 0;
}

//the func will return print func
int (*returnFunc(void)) (int){
	cout << "in returnFunc(void)." << endl;
	return print;   //return a function object,not a function type alia.
}

int main(void){
	//use it.
	int index = 34;

	//get print obj
	auto print_func = returnFunc();
	
	//use print
	cout << print_func(index) << endl;	
}

