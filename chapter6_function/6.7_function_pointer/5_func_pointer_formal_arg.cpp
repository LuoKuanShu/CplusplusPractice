#include <iostream>

using namespace std;

string transBigC(string);
string transSmallC(string);
string trans(string,string (*pf)(string));

int main(void){
    cout << transBigC("jell") << endl;
    cout << transSmallC("lOvE") << endl;

    string word = "loVe nOT lOve.";
    cout << trans(word,transBigC) << endl;
    cout << trans(word,transSmallC) << endl;
}

string transBigC(string s){
    string ret;
    for (auto c : s){
        c = ('a' <= c && c <= 'z') ? toupper(c) : c;
        ret += c;
            
    }

    return ret;
}

string transSmallC(string s){
    string ret;

    for (auto c : s){
        c = ('A' <= c && c <= 'Z') ? tolower(c) : c;
        ret += c;
    }

    return ret;
}

string trans(string s,string (*pf)(string ss)){
    return pf(s);
}
