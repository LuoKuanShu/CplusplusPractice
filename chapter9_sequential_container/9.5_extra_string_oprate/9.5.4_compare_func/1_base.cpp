#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str("love");
	string item("lovew");

	auto res = str.compare(item);
	cout << res << endl;

	res = item.compare(str);
	cout << res << endl;

}
