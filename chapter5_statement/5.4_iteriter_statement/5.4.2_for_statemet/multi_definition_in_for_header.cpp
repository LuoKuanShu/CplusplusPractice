#include <iostream>
#include <vector>

using namespace std;


int main(void){
	//
	vector<string> vs(3,"hello");

	for (decltype(vs.size()) i = 0,sz = vs.size();i != sz;++i){
		vs.push_back(vs[i]);

	}

	for  (auto str : vs){
		cout << str << endl;

	}

}
