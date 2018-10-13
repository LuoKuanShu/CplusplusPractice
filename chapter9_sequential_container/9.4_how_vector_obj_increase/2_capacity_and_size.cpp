#include <iostream>
#include <vector>

using namespace std;

ostream& print(vector<string>&);

int main(void) {
	vector<string> datas;
	print(datas) << endl; // 0 0

	//add 24 elements to 
	for (vector<string>::size_type i = 0;i != 24; ++i) {
		datas.push_back("ele");
	
	}
	print(datas) << endl;  // 24 32

	
	datas.reserve(50);
	print(datas) << endl; //24 50

	//use all of space of capacity
	while (datas.size() != datas.capacity()) {
		datas.push_back("ele");
	}
	print(datas) << endl;  // 50 50

	//add a element
	datas.push_back("ele");
	print(datas) << endl; //51 100

	//request decrease capacity to fit size
	datas.shrink_to_fit();
	print(datas);  //51 51

}

ostream& print(vector<string> &con) {
	cout << "size: " << con.size() << endl;
	cout << "capacity: " << con.capacity() << endl;

	return cout;

}
