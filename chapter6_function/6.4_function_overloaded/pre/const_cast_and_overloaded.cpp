#include <iostream>

using namespace std;

const string &shorterThan(const string &str1,const string &str2);
string &shorterThan(string &str1,string &str2);

int main(void){
    string s1,s2;

    cout << "enter two string: " << endl;
    cin >> s1,s2;

    cout << "the shorter word is " << shorterThan(s1,s2) << endl;

}

const string &shorterThan(const string &str1,const string &str2){
    return (str1.size() < str2.size()) ? str1 : str2;
}

string &shorterThan(string &str1,string &str2){
    auto ret = shorterThan(const_cast<const string&>(str1), 
                           const_cast<const string&>(str2)); //auto will discard the top-level const not low-lwvel const.
    return const_cast<string &>(ret);   // carse this func's real parameter is not a const string,so use const_cast is save.

}
