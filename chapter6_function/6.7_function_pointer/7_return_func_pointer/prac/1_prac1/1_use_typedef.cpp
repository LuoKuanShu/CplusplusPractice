#include <iostream>
#include <vector>

using namespace std;

//declaration func
int printAdd(int,int);   //return int + int
int printMinus(int,int);  //return int - int

//definetion func pointer alias
typedef int (*T_PF)(int,int);


int main(void){
	//declaraton vactor
	vector<T_PF> pf_container;  //initial vector

	//instantiate two func object
	//T_PF is func pointer
	T_PF get_minus = printMinus;
	T_PF get_add = printAdd;

	//add them to vector
	pf_container.push_back(get_minus);
	pf_container.push_back(get_add);

	//use func in vector
	int ival1 = 44,ival2 = 34;
	cout << "ival1 = " << ival1 << "	" << "ival2 = " << ival2 <<endl;
	cout << "folow is minus: " <<endl;
	cout << "	" << pf_container[0](ival1,ival2) << endl;
	
	cout << "**************************" << endl;
	cout << "folow is add: " << endl;
	cout << "	" << pf_container[1](ival1,ival2) << endl;

	cout << "END." << endl;
	
}


int printAdd(int ival1,int ival2){
	cout << "in int printAdd(int,int);" << endl;
	return ival1 + ival2;
}

int printMinus(int ival1,int ival2){
	cout << "int printMinus(int,int);" << endl;
	return ival1 - ival2;
}