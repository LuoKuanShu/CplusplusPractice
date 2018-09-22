#include <iostream>
#include "Screen.c"
#include <typeinfo>

using namespace std;

int all;

int main(void) {
	Screen screen {50,50,'*'};   //the cursor don't hava within-class init value,so does the compiler init the cursor correctly by default.
	cout << screen.getCursor() << endl;
	cout << screen.test << endl;
	cout << all << endl << endl;
	
	
	//can the user check out the pos'actually type?
	Screen::pos var;

	cout << "*" << typeid(var).name() << "*" << endl;
	
	
	/*
	//test change the mutable member data by const member func.
	cout << screen.getAccessCtr() << endl;
	screen.some_member();
	cout << screen.getAccessCtr() << endl << endl;
	*/
}
