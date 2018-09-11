#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

int main(void){
	vector<int> cvi{ 1,4,6,34,56};
		
	auto iterate = cvi.cbegin();

	cout << *iterate << endl;
	
	*iterate = 99;

	

}

