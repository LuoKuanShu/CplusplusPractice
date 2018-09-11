#include <iostream> 
#include <vector>

using namespace std;

int main(void){
	string s;
	vector<string> vs;

	cout << "enter string: " << endl;

	while (cin >> s){
		vs.push_back(s);
	}

	for (auto s : vs){
		cout << s << " ";
	}

}
