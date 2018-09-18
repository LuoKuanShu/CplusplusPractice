#include <iostream>

using namespace std;
 
void print(const string *str){ cout << "in const arg." << endl;}
void print(string *str){ cout << "in non-const arg." << endl; }

int main(void){
    const string sc = "hello";
    const string *pc = &sc;

    string sn = "world";
    string *pn = &sn;

    print(pc);
    print(pn);
}
