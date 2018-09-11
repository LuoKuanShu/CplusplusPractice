#include <iostream>
#include <string>

using namespace std;

int main(void){

	string temp;
	decltype(temp.size()) chars_num = 0;
	decltype(temp.size()) punc_num = 0;
	const decltype(temp.size()) LIMIT = 1000;
	decltype(LIMIT) ONE = 1;

	while (getline(cin,temp)){
		chars_num += temp.size();
		
		cout << temp << endl;

		//just Tong ji less than 1000 chars.
		if(chars_num < LIMIT){	
			for(auto c : temp){
				if(ispunct(c)){
					punc_num += ONE;					
				}
			}
		}else{
			chars_num -= temp.size(); 
		}
	}

	cout << "there are "
		<< chars_num
		<< " chars." << endl;
	cout << "there are "
		<< punc_num 
		<< " puncts."<< endl;

}
