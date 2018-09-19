#include <iostream>
#include <vector>

using namespace std;

//defination func pointer alias.
using Func = int (*)(int,int);

//declaration func
int add(int,int);   // +
int minu(int,int);  //-
int multi(int,int);  // *
int divs(int,int);    // /
int modern(int,int,char);  //chose whice func to use. 
void init(vector<Func>&);  //note the arg is formal arg.



int main(void){
	int ival1 = 34,ival2 = 54;
	vector<Func> contains;
	
	//initial vector
	init(contains);
	
	//print funcs
	for (auto f : contains){
		cout << f(ival1,ival2) << endl;
		cout << "**********************" << endl << endl;
		
	}

	
}

void init(vector<Func> &cts){
	cts.push_back(add);
	cts.push_back(minu);
	cts.push_back(multi);
	cts.push_back(divs);
}

int add(int ival1,int ival2){
	return modern(ival1,ival2,'+');
}

int minu(int ival1,int ival2){
	return modern(ival1,ival2,'-');
}

int multi(int ival1,int ival2){
	return modern(ival1,ival2,'*');

}

int divs(int ival1,int ival2){
	return modern(ival1,ival2,'/');
}


int modern(int ival1,int ival2,char c){
	switch(c){
		case '+':
			return ival1 + ival2;
		case '-':
			return ival1 - ival2;
		case '*':
			return ival1 * ival2;
		case '/':
			return ival1 / ival2;
		defalt:
			cout << "error." << endl;
			return -1;
	}
	

}

