#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	vector<char> v{'l','o','v','e'};

	string s(v.begin(),v.end());
	cout << s << endl;

}
