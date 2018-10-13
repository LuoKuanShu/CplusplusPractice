#include <iostream>
#include <vector>

using namespace std;

void input(vector<string>&,int); //add int cout ele to container
ostream& print(vector<string>&,int);

int main(void) {
	vector<string> datas;
	datas.reserve(1024);


	input(datas,256);  //256  384 1024

	input(datas,512);  //512 1344 1792
	

	input(datas,1000);  // 1000 3516 3584


	input(datas,1048);   // 1048 6846 7168
	

}

void input(vector<string> &con,int count) {

	for (vector<string>::size_type i = 0; i != count; ++i) {
		con.push_back("ele");
	}

	con.resize(con.size() + con.size() / 2);

	print(con,count) << endl;
}

ostream& print(vector<string> &con,int count) {
	cout << "count: " << count << endl;
	cout << "size: " << con.size() << endl;
	cout << "capacity: " << con.capacity() << endl;
	return cout;

}
