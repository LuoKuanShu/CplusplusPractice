#include <iostream>

using namespace std;

const string &shorterThan(const string &str1,const string &str2);
string &shorterThan(string &str1,string &str2);

int main(void){
    string s1,s2;

    cout << "enter two string: " << endl;
    cin >> s1 >> s2;

    cout << "the shorter word is " << shorterThan(s1,s2) << endl;

}

const string &shorterThan(const string &f1_s1,const string &f1_s2){
    return (f1_s1.size() < f1_s2.size()) ? f1_s1 : f1_s2;
}

string &shorterThan(string &f2_s1,string &f2_s2){
    //if ret declarate auto ret,will cause segmentation fault,cause returned ref bound a local variable.
    auto &ret = shorterThan(const_cast<const string&>(f2_s1), 
                           const_cast<const string&>(f2_s2)); //auto will discard the top-level const not low-lwvel const.
    return const_cast<string &>(ret);   // carse this func's real parameter is not a const string,so use const_cast is save.

}
