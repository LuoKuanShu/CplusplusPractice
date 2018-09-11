#include <iostream>
#include <vector>

using namespace std;

void use_while();
void use_for_same_while();
void use_for();
void use_while_same_for();
void show(const vector<string> &v_vs);

int main(void){
	//use_while();
	//use_for_same_while();
	//use_for();
	use_while_same_for();
}

void show(const vector<string> &v_vs){
	for ( auto str : v_vs ){
		cout << str << endl;
	}

	cout << "\n\n";
}

//get data to generate vector
void use_while(){
	vector<string> vs;
	string s;

	cout << "input streings: " << endl;

	while (cin >> s){
		vs.push_back(s);
	}
	show(vs);
}

void use_for_same_while(){
	vector<string> vs;
	string s;

	cout << "enter: " << endl;
	for (/* nothing */;cin >> s;/*   */){
		vs.push_back(s);
	}

	show(vs);
}

//for statement
void use_for(){
	vector<string> vs{"i", "love","you","forever."};

	for (auto beg = vs.begin();beg != vs.end();++beg){
		cout << *beg << endl;
	}

}

void use_while_same_for(){
	vector<string> vs{"i","don't","know","if","i","can","see","you","again"};

	auto beg = vs.begin();
	while (beg != vs.end()){
		cout << *beg << endl;
		++beg;
	}
}
