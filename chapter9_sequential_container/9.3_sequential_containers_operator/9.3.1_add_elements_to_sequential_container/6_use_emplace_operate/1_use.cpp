
#include <iostream>
#include <vector>

using namespace std;

//emplace related func construct a element type obj using args.
//emplace_front = push_front
//emplace = insert
//emplace_back = push_back

struct People {
	
	People(string nm,int ag):name(nm),age(ag){}
	People():People("default",0){}
	People(string nm):People(nm,0){}
	People(int ag):People("default",ag){}


	string name = "Tom";
	int age = 29;
};

int main(void) {
	vector<People> persons;
	
	//use three func.
	persons.emplace_back("Last",0);
	cout << persons[0].name << endl;
	persons.emplace(persons.begin(),"First",1);
	cout << persons[0].name << endl;


	//test People's each constructor
	persons.emplace_back();
	cout << (*(persons.end()-1)).name << endl;


	persons.emplace_back("MM");
	cout << (*(persons.end()-1)).name << endl;

	persons.emplace_back(23);
	cout << (*(persons.end()-1)).name << endl;
}
