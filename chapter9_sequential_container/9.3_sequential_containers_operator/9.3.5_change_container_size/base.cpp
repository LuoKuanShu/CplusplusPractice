

#include <iostream>
#include <vector>

using namespace std;

class People {
public:
	People()=default;
	People(string n,int a):name(n),age(a) {}

	string name = "manson";
	int age = 22;
};

void print(vector<int>);
void print(vector<People>&);

int main(void) {
	//for built-in data type of element
	vector<int> v;
	//biger
	v.resize(2);  // two 0
	print(v);

	v.resize(5,5); // 0 0 5 5 5
	print(v);

	//smaller
	v.resize(3);  //0  0 5
	print(v);


	//for class 
	vector<People> vc;
	//biger
	vc.resize(1);
	print(vc);
	vc.resize(3,People("mm",12));
	print(vc);
	
	//smaller
	vc.resize(2);
	print(vc);	

}

void print(vector<int> datas) {
	for (auto i : datas) {
		cout << i << " ";

	}
	cout << endl;


	//for class
	

}
void print(vector<People> &con) {
	for (auto p : con) {
		cout << "<" << p.name << "," << p.age << ">" << " ";
	}

	cout << endl;

}
