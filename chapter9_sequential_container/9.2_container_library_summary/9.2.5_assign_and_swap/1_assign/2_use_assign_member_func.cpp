
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(void) {
	list<string> names;
	vector<const char*> oldstyle = "love you";

	names.assign(oldstyle.cbegin(),oldstyle.ced());

}
