#include <iostream>
#include "Screen.c"
#include <unistd.h>

using namespace std;

int main(void) {
	Screen s;
	
	print(cout,s);
	sleep(1);
	s.move(18,70).set('@');  //a command call chain
	print(cout,s);
}
