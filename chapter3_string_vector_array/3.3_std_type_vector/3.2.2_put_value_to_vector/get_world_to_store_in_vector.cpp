#include <iostream>
#include <vector>

using namespace std;

int main(void){
	cout << "enter a string: " << endl;
	
	string word;
	vector<string> sv;
	while (cin >> word){
		sv.push_back(word);	
	}

	cout << sv[10];

}
