
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(void) {
	list<string> words{"gun","pc","mouth"};

	words.insert(++(words.begin()),"beauty");
	//gun beauty pc mouth
	for(auto a : words) {
		cout << a << " ";
	}
	cout << endl;


	vector<string> vs(words.begin(),words.end());
	//add to the head that vector doesn't support push_front.
	vs.insert(vs.begin(),"First");
	//First gun beauty pc mouth
	for (auto a : vs) {
		cout << a << " ";
	}
	cout << endl;
}
