#include <iostream>

using namespace std;

constexpr const string &shorterThan(const string &s1,const string &s2){
    return (s1.size() < s2.size()) ? s1 : s2;
}

int main(void){
    string s1 = "he",s2 = "she";
    cout << shorterThan(s1,s2) << endl;
}
