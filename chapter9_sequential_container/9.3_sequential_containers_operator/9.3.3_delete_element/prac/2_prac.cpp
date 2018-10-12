
#include <iostream>
#include <list>
#include <vector>

using namespace std;

//discard number like 1 3 from list
//discard number like 2 4 from vector

int main(void) {
	int data[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	cout << 1 << endl;
	list<int> data_single(begin(data),end(data));
	vector<int> data_double(begin(data),end(data));
	cout <<1 << endl;	
	
	cout << "source data: " << endl;
	for(auto i : data){
		cout << i << " ";
	}
	cout << endl << endl;


	//***
	cout << data_single.size() << endl;
	auto iter1 = data_single.begin();
	cout << *iter1 << endl;
	while (iter1 != data_single.end()) {
		if ((*iter1) % 2 == 1) {
			//once delete element successly,current iteriter is invalid.
			//so we must update the iter1 using return value.
			iter1 = data_single.erase(iter1); 
			continue;
		}
		//script going here mean havn't delete element.
		//so we can reuse the iteriter.
		++iter1;	
	
	}
	cout << 2 << endl;
	
	cout << "data discard number like 1 3:" << endl;
	for (auto i : data_single) {
		cout << i << " ";
	}
	cout << endl << endl;
	

	
	//******
	auto iter2 = data_double.begin();
	while (iter2 != data_double.end()) {
		if (!((*iter2) % 2)) {
			iter2 = data_double.erase(iter2);
			continue;
		}
		++iter2;
	}

	cout << "data discard num like 2 4:" << endl;
	for (auto i : data_double) {
		cout << i << " ";
	}
	cout << endl << endl;
	
}
