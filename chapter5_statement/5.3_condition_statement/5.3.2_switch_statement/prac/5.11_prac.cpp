#include <iostream>
#include <string>

using namespace std;

int main(void){
	string line= " ";
	unsigned vowerCnt = 0;
	unsigned spaceCnt = 0;

	cout << "Enter a statement: " << endl;

	while (getline(cin,line)){
		for(const auto ch:line){
			if (ch == 'a' || ch == 'A')
				++vowerCnt;
			else if(ch == 'e' || ch == 'E')
				++vowerCnt;
			else if(ch == 'i' || ch == 'I')
				++vowerCnt;
			else if (ch == 'o' || ch == 'O')
				++vowerCnt;
			else if (ch == 'u' || ch == 'U')
				++vowerCnt;
			else if (isspace(ch))
				++spaceCnt;
			else
				;

		}
	}

	cout << "Count of vower of char that occured is: " << vowerCnt << endl;
	cout << "there're " << spaceCnt << "spaces." << endl;
}
