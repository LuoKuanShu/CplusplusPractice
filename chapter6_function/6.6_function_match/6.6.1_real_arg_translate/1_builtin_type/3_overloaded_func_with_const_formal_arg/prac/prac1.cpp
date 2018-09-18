#include <iostream>

using namespace std;

void calc(int &a,int &b){ cout << "in f(int&,int&)}" << endl;}
void calc(const int &a,const int &b){ cout << "in f(const int&,const int&" << endl;}

int main(void){
    //calc(4,4);  call the f(const int&,const int&)
    int ival1 = 1,ival2 = 3;
    int &r1 = ival1,&r2 = ival2;

    //calc(r1,r2);  //call f(int&,int&);
    calc(ival1,ival2);
}
