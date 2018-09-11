#include <iostream>

using namespace std;

int main(void){
	//we count string "ff","fl" and "fi" that occured times.
	
	string statement = " ";
	unsigned ffCnt = 0,flCnt = 0,fiCnt = 0;

	cout << "enter a statement: " << endl;

	const char curr = ' ',next = ' ';

	while (getline(cin,statement)){
		auto begIter = statement.cbegin();
		auto endIter = statement.cend();
		for 
		curr = *begIter;
		next = *(++begIter);

		string base = string(1,cur) + string(1,next);

		//compare
		if (base == string("ff")){
			++ffCnt;

		}else if (base == string("fi")){
			++fiCnt;
		}else if (base == string("fl"){
			++flCnt;
		}else 
		;



	}

}
