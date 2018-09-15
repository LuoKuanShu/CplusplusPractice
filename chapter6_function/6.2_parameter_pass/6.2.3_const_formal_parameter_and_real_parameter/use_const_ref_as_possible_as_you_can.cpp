#include <iostream>


using namespace std;

string::size_type find_char(const string &s,char c,string::size_type &occurs);  //if s is non-const ref,it can't bund the literial value
bool is_sentence(const string &str);

int main(void){
    string s = "love you.";
    cout << is_sentence(s);
    
}


string::size_type find_char(const string &s,char c,string::size_type &occurs){
    auto pos = s.size();
    occurs = 0; //ensure occurs initilize correctly.

    for (decltype(pos) i = 0;i != s.size();++i){
        if (s[i] == c){
            if (pos == s.size()){  //it no need to declate a static local variable to keep the first postion.
                pos == i;
            }

            ++occurs;
        }

    }
    cout << "string's length is " << s.size() << endl;
    cout << "pos is " << pos << endl;
    cout << "occurs is " << occurs << endl;
    return pos -1; 

}
bool is_sentence(const string &str){
    string::size_type cnt = 0;
    return (find_char(str,'.',cnt) == str.size() - 1) && cnt == 1;  //non-const ref can't bound const ref
}
