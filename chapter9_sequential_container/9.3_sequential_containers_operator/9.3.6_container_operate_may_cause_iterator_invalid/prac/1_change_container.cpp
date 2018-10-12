
#include <iostream>
#include <list>

/*
 * input: 1 2 3 4 
 * output: 1 1 3 3
 * 
 */

using namespace std;

void print(list<int>);

int main(void) {

	list<int> datas{1,2,3,4,5,6,7,8,9,10,11,12};
	print(datas);

	//cope data
	auto ibeg = datas.begin();
	while (ibeg != datas.end()) {
		if (*ibeg % 2) {
			//locate position again
			ibeg = datas.insert(ibeg,*ibeg); //insert
			//make it to data that being treat in future.
			++ibeg;
		       	++ibeg;	//now it bind to secod data in formal datas.
		} else {
			
			//delete
			ibeg = datas.erase(ibeg);
		}
	}	

	
	print(datas);

}

void print(list<int> con) {

	for (auto i : con) {

		cout << i << " ";
	
	}
	cout << endl;

}
