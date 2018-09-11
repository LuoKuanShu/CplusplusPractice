#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
	string word = " ";
	vector<string> storage;

	while (cin >> word){
		storage.push_back(word);
	}

	for (auto &rs : storage){
		for (auto &rc : rs){
			//rc is a char
			rc = toupper(rc);
		}

	}

	for (auto &rc : storage){
		cout << rc << " ";
		
	}

}
