#include <iostream>
#include <vector>

using namespace std;

class Window_mgr {

//let getV() can access the private member data screens.
	friend vector<Screen> &getV(Window_mgr&);

//type member defined
public:
	using ScreenIndex = std::vector<Screen>::size_type;

//member function
public:
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens {Screen(24,80,'#')};
};


//member definition
void Window_mgr::clear(ScreenIndex index) {
	Screen &s = screens[index];
	s.contents = string(s.height * s.width,' ');
}

//non-member func definition
vector<Screen> &getV(Window_mgr&);

vector<Screen> &getV(Window_mgr &mg) {
	return mg.screens;
}
