#include <iostream>


//that's a easy way to return func object.\

using namespace std;

//func by return
void print(int i){
	cout << "in print(int)." << endl;
}

//the func that will return print with end return type.
auto returnFunc() -> void (*)(int){
	cout << "in returnFunc();" << endl;
	return print;
}

int main(void){
	int i = 0;
	
	//get print func.
	auto print_f = returnFunc();

	//use it
	print_f(i);
}