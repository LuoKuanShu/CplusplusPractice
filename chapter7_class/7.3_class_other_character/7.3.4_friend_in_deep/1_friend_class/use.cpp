#include <iostream>
#include "Screen.c"
#include "Window_mgr.c"

using namespace std;

int main(void) {
	//init a Window_mgr
	Window_mgr mg;

	auto &v = getV(mg);
	Screen &s = v[0];

	s.display(cout);

}
