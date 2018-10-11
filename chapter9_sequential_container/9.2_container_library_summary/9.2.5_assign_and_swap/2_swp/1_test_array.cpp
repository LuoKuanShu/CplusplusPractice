
#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;

int main(void) {

	//array
	array<int,3> a1{1,2,3};
	array<int,3> a2{4,5,6};

	auto a1_beg = a1.begin(),a2_beg = a2.begin();
	//a1_beg is 1 
	//a2_beg is 4
	cout << "a1_beg is " << *a1_beg << endl
	     << "a2_beg is " << *a2_beg << endl;
	swap(a1,a2);
	//a1_beg is 4
	//a2_beg is 1
	cout << "a1_beg is " << *a1_beg << endl
	     << "a2_beg is " << *a2_beg << endl;

	//string
	string s1 = "12",s2 = "34";
	auto s1_b = s1.begin(),s2_b = s2.begin();
	//1 3
	cout << "s1_b: " << *s1_b << endl;
	cout << "s2_b: " << *s2_b << endl;
	swap(s1,s2);
	//3 1
	cout << "s1_b: " << *s1_b << endl;
	cout << "s2_b: " << *s2_b << endl;

	//34 12
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	


	//vector
	vector<int> v1{1,2};
	vector<int> v2{3,4};
	auto i_v1 = v1.begin(),i_v2 = v2.begin();
	//1 3
	cout << "i_v1: " << *i_v1 << endl;
	cout << "i_v2: " << *i_v2 << endl;

	swap(v1,v2);
	1 3
	cout << "i_v1: " << *i_v1 << endl;
	cout << "i_v2: " << *i_v2 << endl;
}
