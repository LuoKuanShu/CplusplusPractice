#include <iostream>

using namespace std;

int main(void){

	//alias declaration
	//cannot declaration multi alias in one line.
	using db = double; 
	using it = int;

	db d = 1.3;
	it i = 1;

	cout << d << endl;
	cout << i << endl;

}
