#include <iostream>
#include <string>

using namespace std;

typedef string::size_type sz;
string screen(sz ht = 24,sz wid = 80,string background = "hello");     //give each formal arguement a default value.

int main(void){
    screen();
}

string screen(sz ht,sz wid,string background){
    cout << "Screen:  " << endl;
    cout << "   height:  " << ht << endl;
    cout << "   width:  " << wid << endl;
    cout << "   backgroud:  " << background  << endl;
}
