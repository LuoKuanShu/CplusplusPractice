
#include <iostream>
#include <vector>

using namespace std;

string getFirst(const vector<string>&);

int main(void) {
	vector<string> v;
	cout << getFirst(v) << endl;

}

string getFirst(const vector<string> &container) {

	if(!container.empty()) {

		return container[0];
		//return container.at(0);
		//return *container.begin();
	
	}

	return "empty container.";
}
