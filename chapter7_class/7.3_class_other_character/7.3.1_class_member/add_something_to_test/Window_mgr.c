#include <iostream>
#include "Screen.c"

using namespace std;

class Window_mgr {

public:
	const vector<Screen> &getScreens() const { return screens; }
private:
	std::vector<Screen> screens {Screen(24,80,' ')};
};
