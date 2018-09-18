#include <iostream>

using namespace std;

string transBigC(string);
string transSmallC(string);


//typedef string f(string);
//typedef string (*f)(string);  //same
typedef decltype(transSmallC) f;
//typedef decltype(transSmallC) *f;  //same

string trans(string,f);    //f just a data type,not a special fuction.

int main(void){
    cout << transBigC("jell") << endl;
    cout << transSmallC("lOvE") << endl;

    string word = "loVe nOT lOve.";
    cout << trans(word,transBigC) << endl;
    cout << trans(word,transSmallC) << endl;
    
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

string trans(string s,f func){
    return func(s);
}
