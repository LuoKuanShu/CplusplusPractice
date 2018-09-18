#include <iostream>

using namespace std;

inline const string &shorterThan(const string &s1,const string &s2);

int main(void){
    cout << "enter two string: " << endl;
    string s1,s2;

    cin >> s1 >> s2;

    cout << shorterThan(s1,s2) << endl;
}

inline const string &shorterThan(const string &s1,const string &s2){
    return (s1.size() < s2.size()) ? s1 : s2;
}
