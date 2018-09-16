#include <iostream>

using namespace std;

bool contain_substring(const string &str,const string &sub);

int main(void){

    string s1 = "love",s2 = "loveyou";

    cout << "the result is " << contain_substring(s1,s2) << endl;

}

bool contain_substring(const string &str,const string &sub){
    if (str == sub){
        cout << "not a substring" << endl;
        return str == sub;

    }

    auto min_size = (str.size() < sub.size()) ? str.size():sub.size();

    for (decltype(min_size) i = 0;i!=min_size;++i){
        if (str[i] != sub[i]){
            return false;   //can't be return;
        }
    }
    //return true; 
    //cause there're no return bool,the func may be return any value,cause the value  is not point.
}
