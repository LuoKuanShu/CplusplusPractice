#include <iostream>
#include <string>

using namespace std;

int main(void){
	string word = " ";
	unsigned vowerCnt = 0;

	cout << "Enter a statement: " << endl;

	while (cin >> word){
		for(const auto ch:word){
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
			else
				;

		}
	}

	cout << "Count of vower of char that occured is: " << vowerCnt << endl;
}
