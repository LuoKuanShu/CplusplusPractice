#include <iostream>

using namespace std;

void swp(string &s1,string &s2);

int main(void){
    string s1,s2;

    cout << "enter two string: << " << endl;

    cin >> s1 >> s2;
    swp(s1,s2);

    cout << "finaly the s1 and s2 is " << s1 << " " << s2 << endl;

}

void swp(string &s1,string &s2){
    string temp = s1;
    s1 = s2;
    s2 = temp;
}
