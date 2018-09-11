#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
	string word;
	vector<string> words;

	//generate data
	cout << "read: " << endl;

	while (cin >> word){
		words.push_back(word);
	}

	//
	auto beg = words.begin();
	string cur,next;
	unsigned cnt = 1;   //
	
	
	while (beg != words.end()){
		cur = *beg; //outter loop update th cur string
		next = *(++beg);

		while (beg != words.end() && cur == next){
			++cnt;
			next = *(++beg); //inner loop updater next
		}
		
		//this time the next point the first different element
		cout << "the word " << cur << " has occuces " << cnt <<  " times. " << endl;
		cnt = 1;  //reset 
	
	}
}
