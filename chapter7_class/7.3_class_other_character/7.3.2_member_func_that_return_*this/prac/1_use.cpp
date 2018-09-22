#include <iostream>
#include <unistd.h>
#include "Screen.c"

using namespace std;

int main(void) {
	Screen s(5,5,'X');
	
	s.display(cout);
}
