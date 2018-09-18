#include <iostream>
#include "shorterThan.h"

using namespace std;

int main(void){
    string s1,s2;
    cout << "enter two string: " << endl;
    cin >> s1 >> s2;

    cout << shorterThan(s1,s2) << endl;
}
