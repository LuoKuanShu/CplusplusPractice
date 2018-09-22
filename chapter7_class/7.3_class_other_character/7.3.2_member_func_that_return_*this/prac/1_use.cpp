#include <iostream>
#include <unistd.h>
#include "Screen.c"

using namespace std;

int main(void) {
	Screen s;  //use the init value in class to init member data.

	s.display(cout);
	sleep(1);
	s.move(15,67).set('+').display(cout);

}
