#include <iostream>
#include "Screen.c"
#include <unistd.h>

using namespace std;

int main(void){
	Screen s;

	for (int i = 0;i != 135*31;++i){
		print(cout,s);
		cout << endl;  //must fresh the buffer,or it will be disorder.
		s.set(i);
		sleep(1);
	}

}
