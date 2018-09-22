#include <iostream>
#include "Screen.c"
#include <unistd.h>

using namespace std;

int main(void) {
	Screen s;
	
	s.display(cout);
	sleep(1);
	s.move(18,80).set('&').display(cout);

}
