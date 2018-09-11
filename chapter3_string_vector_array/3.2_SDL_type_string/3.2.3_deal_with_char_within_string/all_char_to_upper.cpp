#include <iostream>
#include <string>

using namespace std;


int main(void){

	string temp;

	//get input
	while (getline(cin,temp)){
		//change each char to upper
		for (char &rc : temp){
			rc = toupper(rc);
		}
		
		//outut
		cout << temp << endl;
	}


}
