#include <iostream>
#include "Window_mgr.c"
#include <vector>

using namespace std;

int main(void){
	Window_mgr manager;   //execute the init by with-in-class-init-value
	const &screens = manager.getScreens();

	auto &v = screens[0].getSize();
	cout << v[0] << " " << v[1] << endl;
}
