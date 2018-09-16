#include <iostream>

using namespace std;

const string& takeShorter(const string &rs1,const string &rs2);

int main(void){
    string s1,s2;

    cout << "enter two string: " << endl;
    cin >> s1 >> s2;

    cout << takeShorter(s1,s2) << endl;

}

const string& takeShorter(const string &rs1,const string &rs2){
    return (rs1 < rs2)? rs1 : rs2;

}
