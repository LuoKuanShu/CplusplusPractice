#include <iostream>
#include <vector>

using namespace std;

int main(void){
	string s = " ";
	
	getline(cin,s);

	auto iterate = s.begin();
	while (!isspace(*iterate)){
		*iterate = toupper(*iterate);
		++iterate;
	}

	cout << s << endl;


}
