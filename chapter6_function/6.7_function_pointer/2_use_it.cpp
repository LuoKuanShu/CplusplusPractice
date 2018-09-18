#include <iostream>

using namespace std;

bool (*pf)(const string &,const string &);  //declaration
bool shorterThan(const string&,const string&);

int main(void){
    //initial funtion pointer
    pf = shorterThan;
    //pf = &shorterThan;  //its ok;
    string s1 = "s",s2 = "big";

    //use
    bool b1 = pf(s1,s2);
    bool b2 = (*pf)(s1,s2);
    bool b3 = shorterThan(s1,s2);

    cout << b1 << " " << b2 << " " << b3 << endl;
}

bool shorterThan(const string &s1,const string &s2){
    return (s1.size() < s2.size()) ? true : false;
}
