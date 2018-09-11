#include <iostream>
#include <vector>

using namespace std;

int main(void){
	string s = " i love you.";
	//string s("i love you.");

	if(s.begin() != s.end()){
		auto iterate = s.begin();
		*iterate = toupper(*iterate);

	}

	cout << s;

}
