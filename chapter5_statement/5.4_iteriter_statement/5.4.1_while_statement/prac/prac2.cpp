#include <iostream>
#include <vector>

using namespace std;

void add(const string &s);
vector<string> store(10);

int main(void){
	//get data
	vector<string> words;
	string word;

	while (cin >> word){
		words.push_back(word);
	}
	
	//work
	
	for(auto str:words){
		add(str);
	}
	//flush last record
	add("end");

	//print
	for (auto s : store){
		cout << "*    "  << s << endl;
	}

}

void add(const string &s){
	static unsigned cnt = 1;
	static string base = "start";

	if (base == s){
		++cnt;
	}else{
		store[cnt] = base;
		base = s;
		cnt = 1;
	}
}
