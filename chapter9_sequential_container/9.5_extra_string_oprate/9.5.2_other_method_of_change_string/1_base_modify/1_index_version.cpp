#include <iostream>
#include <string>

using namespace std;


int main(void) {
	string s;

	//insert
	s.insert(0,"hello");
	s.insert(5,"world");
	cout << s << endl;  //hello world

	//erase
	s.erase(0,5);  
	cout << s << endl; //world



}


