#include <iostream>
#include <string>

using namespace std;

int main(void){
	string temp;
	unsigned num;

	while (getline(cin,temp)){
		if(!temp.empty()){
			cout << temp << endl;
			num += temp.size();
		}
	}

	cout << "well, it's "
		<< num << " "
		<< "chars." << endl;

}
	
