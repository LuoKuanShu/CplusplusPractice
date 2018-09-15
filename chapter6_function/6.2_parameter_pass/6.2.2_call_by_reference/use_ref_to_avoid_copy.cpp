#include <iostream>
#include <string>

using namespace std;

bool isShorter(const string &str1,const string &str2);

int main(void){
	string s1 = "love",s2 = "l";

	cout << isShorter(s1,s2) << endl;
}

bool isShorter(const string &str1,const string &str2){
	return str1.size() < str2.size();
}
