#include <iostream>

using namespace std;

void reset(string &s);

int main(void){
    string s;

    cout << "enter a string: " << endl;
    cin >> s;

    reset(s);

    cout << "finally s is " << s << endl;

}

void reset(string &s){
    s = " ";

    cout << "succese." << endl;

}


