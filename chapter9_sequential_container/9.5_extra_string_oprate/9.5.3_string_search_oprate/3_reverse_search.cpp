#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str = "love your love.";
	string item = "love";
	auto res = str.find(item);
	cout << res << endl;
	res = str.rfind(item);
	cout << res << endl;

}
