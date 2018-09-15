#include <iostream>

using namespace std;

bool contain_BChar(const string &s);
void to_downChar(string &s);

int main(void){
    string s = "Hell";
    to_downChar(s);
    cout << s << endl;
}

bool contain_BChar(const string &s){
    for (auto c : s){  //just read value,so the c no need to be ref,actually it's char.we can't change s by it.
        if (c >= 'A' && c <= 'Z'){
            return true;
        }
    }

    return false;
}

void to_downChar(string &s){
    for (auto &c : s){
        if (contain_BChar(string(1,c))){
            c = tolower(c);
        }
    }
}
