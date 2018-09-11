#include <iostream>
#include <string>

using namespace std;

int main(void){
	string word = " ";
	unsigned vowerCnt = 0;

	cout << "Enter a statement: " << endl;

	while (cin >> word){
		for(const auto ch:word){
			if (ch == 'a')
				++vowerCnt;
			else if(ch == 'e')
				++vowerCnt;
			else if(ch == 'i')
				++vowerCnt;
			else if (ch == 'o')
				++vowerCnt;
			else if (ch == 'u')
				++vowerCnt;
			else
				;

		}
	}

	cout << "Count of vower of char that occured is: " << vowerCnt << endl;
}
