
#include <iostream>
#include <vector>

using namespace std;

//capacity()   how can container hava elements at all?
//reserve()     change the capcity to fit user
//shrink_to_fit()   decrease the capcity,it's may failed

ostream& print(vector<string>&);  //print size capcity of container

int main(void) {
	
	vector<string> datas;
	print(datas) << endl;  // 0 0

	datas.resize(5,"he");
	print(datas) << endl;  // 5 5

	datas.reserve(20);
	print(datas) << endl;  // 5 20

	datas.reserve(15);
	print(datas) << endl; //5 20

	datas.shrink_to_fit();
	print(datas) << endl; //5 5

	datas.resize(3);
	print(datas) << endl; //3 5

}

ostream& print(vector<string> &con) {
	cout << "curr element count: " << con.size() << endl;
	cout << "capacity: " << con.capacity() << endl;
	return cout;
}


