
#include <iostream>
#include <vector>
#include <array>
#include <list>

using namespace std;

int main(void) {
	
	//C c;
	vector<int> v1;
	list<int> L1;
	array<int,2> a1;
	cout << "C c" << endl;
	cout << "ele count: " << endl;
	cout << "	v1: " << v1.size() << endl		<< "	L1: " << L1.size() << endl
	     << "	a1: " << a1.size() << endl
	     << "	content in a1: " 
	     << a1[0] << " " << a1[1] << " " << a1[2] << " " << a1[3] << endl << endl;



	//C c1(c2) or C c1 = c2;
	v1.push_back(2);
	vector<int> v2(v1);
	L1.push_back(2);
	list<int> L2(L1);
	array<int,2> a2{1};
	array<int,2> a3(a2);
	
	cout << "C c1(c2)" << endl;
	cout << "content: " << endl;
	cout << "	v1: " << v1[0] <<endl
	     << "	v2: " << v2[0] <<endl
	     << "	L1: " << L1.front() << endl
	     << "	L2: " << L2.front() << endl
	     << "	a2: " << a2[0] << " " << a2[1] <<  endl
	     << "	a3: " << a3[1] << " " << a3[1] << endl << endl;
	
	//C c{a,b..} 
	list<int> L3{1,2};
	array<int,2> a4{1};

	cout << "C c{a,b..}" << endl;
	cout << "content: " << endl;
	cout << "	L3: " << L3.front() << " " << L3.back() << " " << endl
	     << "	a4: " << a4[0] << " " << a4[1] << endl << endl;	     
	

	//C c(a,b)
	vector<int> v3{1,2,3};
	vector<int> v4(v3.begin(),v3.end() - 1);

	cout << "C c(a,b)" << endl;
	cout << "content: " << endl;
	cout << "	v3: ";
	auto ibeg = v3.begin(),iend = v3.end();
	for (;ibeg != iend;++ibeg) {
		cout << *ibeg << " ";
	}
	cout << endl;
	cout << "	v4: ";
	ibeg = v4.begin();
	iend = v4.end();
	for (;ibeg != iend;++ibeg) {
		cout << *ibeg << " ";
	}
	cout << endl << endl;


	//C c(n)
	vector<int> v5(1);
	cout << "C c(n)" << endl;
	cout << "content: " << endl;
	cout << "	v5: " << v5[0] << endl
		<< endl;

	//C c(n,a)
	vector<int> v6(1,8);
	cout << "C c(n,a)" << endl;
	cout << "content: " << endl;
	cout << "	v6: " << v6[0] << endl << endl;
}
