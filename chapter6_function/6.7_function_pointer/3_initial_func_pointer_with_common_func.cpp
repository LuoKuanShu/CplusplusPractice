#include <iostream>

using namespace std;

bool (*pf)(const string &,const string &);  //declaration
bool shorterThan(const string&,const string&);
bool cstringCompare(const char &,const char&);

int main(void){
    //pf = 0;
    pf = shorterThan;
    pf = cstringCompare; //error, type is not suiltable.

}

bool shorterThan(const string &s1,const string &s2){
    return (s1.size() < s2.size()) ? true : false;
}

bool cstringCompare(const char &c1,const char &c2){
    return (c1 < c2) ? true : false;
}
