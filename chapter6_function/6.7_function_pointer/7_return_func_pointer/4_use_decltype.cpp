#include <iostream>

using namespace std;

//the func returned
void print(int){
	cout << "in print(int)." << endl;
}

//the func that will return print obj
decltype(print) *returnFunc(){
	cout << "in returnFunc();" << endl;
	return print;
}

int main(void){
	int i = 3;

	
	//get print
	auto print_f = returnFunc();
	
	//use it
	print(i);
}