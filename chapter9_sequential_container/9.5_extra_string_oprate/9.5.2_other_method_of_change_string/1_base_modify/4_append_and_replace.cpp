#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string source("hello world");

	//append
	source.append(",i'm come back.");
	cout << source << endl; //hello world,i'm come back.

	//replace 
	source.replace(
		source.find("h"),source.find("i"),
		"");
	cout << source << endl; // i'm come back.

}
